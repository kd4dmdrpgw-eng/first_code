"""Compile every exercise with warnings as errors, then check behavior."""
from pathlib import Path
import itertools
import os
import subprocess

ROOT = Path(__file__).resolve().parents[1]
BUILD = ROOT / "build"
BUILD.mkdir(exist_ok=True)
SOURCES = sorted(ROOT.glob("day*/*.c"))
CC = os.environ.get("CC", "gcc")

def run(source):
    binary = BUILD / (source.stem + (".exe" if os.name == "nt" else ""))
    subprocess.run([CC, "-std=c11", "-Wall", "-Wextra", "-Werror",
                    "-I", str(ROOT / "include"), *map(str, SOURCES),
                    str(source), "-o", str(binary)], check=True)
    return subprocess.run([str(binary)], check=True, capture_output=True).stdout.decode().replace("\r\n", "\n")

expected_lines = [
    "X", "AAA", "NPP", "-0+", "02468", "13579", "234567", "246",
    " ".join(f"{a}{b}" for a in range(3) for b in range(3)), "01 02 12",
    ", ".join(f"{a}{b}" for a, b in itertools.combinations(range(10), 2)),
    "9", "123",
    ", ".join("".join(map(str, group)) for group in itertools.combinations(range(10), 3)),
    "0099",
    ", ".join(f"{a:02} {b:02}" for a, b in itertools.combinations(range(4), 2)),
    ", ".join(f"{a:02} {b:02}" for a, b in itertools.combinations(range(100), 2)),
    "hello",
]
assert run(ROOT / "tests/test_functions.c") == "\n".join(expected_lines) + "\n", "Function output mismatch"
examples = {"single_character": "B", "two_characters": "KA", "spaced_characters": "B C",
            "line_breaks": "A B\nC", "practice_demo": "KK MMM\n246\n42 Istanbul\n"}
for name, expected in examples.items():
    assert run(ROOT / "examples" / (name + ".c")) == expected, name
print(f"PASS: {len(SOURCES)} functions, value assertions, 18 output checks and {len(examples)} examples.")
