# C Programming Fundamentals

Davut'un C öğrenirken yazdığı temel alıştırmalar. Karakter çıktısı, döngüler, koşullar, pointer kullanımı ve string işlemleri üzerine çalışmaları içerir.

## Klasörler

| Klasör | İçerik |
| --- | --- |
| `day01/` | Karakter çıktısı, tekrarlar, koşullar, sayılar ve kombinasyonlar |
| `day02/` | Pointer, bölme/kalan ve string fonksiyonları |
| `include/` | Ortak fonksiyon bildirimleri |
| `examples/` | Çalıştırılabilir küçük örnekler |
| `tests/` | Sonuçları ve sınır durumlarını kontrol eden testler |
| `docs/source-map.md` | Eski dosyalar ile yeni fonksiyonların eşleştirmesi |

## Derleme ve çalıştırma

GCC ve Python 3 gereklidir. Kodlar `write` ve `unistd.h` kullanır; Linux, macOS veya Windows üzerinde MSYS2/MinGW ortamı uygundur.

```sh
gcc -std=c11 -Wall -Wextra -Werror -Iinclude day01/*.c day02/*.c examples/practice_demo.c -o practice_demo
./practice_demo
python tests/run_tests.py
```

Örnek çıktı:

```text
KK MMM
246
42 Istanbul
```

Her örneğin kendi `main` fonksiyonu vardır; örnek dosyalarını ayrı ayrı derleyin.

## Alıştırmaların kapsamı

- Bunlar öğrenme amaçlı fonksiyonlardır; genel kullanıma hazır bir kütüphane değildir.
- Pointer parametreleri geçerli belleğe işaret etmelidir. Stringler sıfır karakteriyle sonlanmalıdır.
- `ft_strcpy` ve `ft_strcat` için hedef tampon yeterince büyük olmalı, kaynak ve hedef örtüşmemelidir.
- Bölme işlemlerinde bölen sıfır olamaz; `INT_MIN / -1` kullanılmamalıdır. Çıktı pointerları farklı nesnelere işaret etmelidir.
- Rakam yazdıran fonksiyonlarda değerler 0–9, iki basamaklı yazdırmada 0–99 aralığında olmalıdır.
- `ft_sum_to` ve `ft_count_even` küçük eğitim girdileri içindir; `int` taşmasına yol açan girdiler desteklenmez.
- Harf sınıflandırma ve büyük/küçük harf işlemleri ASCII karakterleri içindir.

## Düzenleme notları

22 kaynak dosyadaki çalışmalar fonksiyon adlarına göre ayrıldı; tekrarlar, gereksiz bildirimler, fonksiyon dışında kalan denemeler ve yanlışlıkla yazılmış `qq` satırı temizlendi. Girintiler düzenlendi. `ft_strcmp`, yüksek bayt değerlerini doğru karşılaştırmak için `unsigned char` kullanır. Ortak başlık, örnekler, testler ve açıklamalar düzenleme sırasında eklendi.

Eski `calısma_1`–`calısma_4` dosyalarının yerini bu yapı alır; önceki sürümler Git geçmişinde bulunabilir.
