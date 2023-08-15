# Push_Swap Projesi Anlatımı

Bu proje, iki yığına (stack) sahip olarak verilen sayıları sıralamayı amaçlar. Bu projede, belirli sıralama algoritmaları kullanarak sayıları yığınlarda taşımak ve sıralamak gereklidir.

## Proje Açıklaması

- "push_swap" projesi, verilen sayıları sıralamak için yığınlarda taşıma ve manipülasyon işlemlerini içerir.
- Projede, farklı sıralama algoritmaları (örneğin, selection, radix, özel algoritmalar) kullanılarak yığınlarda taşıma işlemleri gerçekleştirilir.
- Proje, minimum hamle sayısını elde etmek için optimize edilmelidir.

## Ayağa Kaldırma Adımları

1. Öncelikle projenin kaynak kodlarını indirin.

2. İndirdiğiniz kaynak kodları bir dizine çıkarın.

3. Terminale gidin ve projenin ana dizinine gidin:

    ```bash
    cd /path/to/push_swap
    ```

4. Projeyi derlemek için aşağıdaki komutları kullanabilirsiniz:

    ```bash
    make
    ```

    Bu komut, projeyi derleyecek ve "push_swap" ve "checker" adlı iki yürütülebilir dosya oluşturacaktır.

5. `push_swap` programını kullanarak sayıları sıralamak için aşağıdaki komutu kullanabilirsiniz:

    ```bash
    ./push_swap 5 2 8 1
    ```

    Sayıları kendi istediğiniz sırayla girin. Bu komut, minimum hamle sayısıyla sayıları sıralayacaktır.

6. `checker` programını kullanarak sıralamayı doğrulamak için aşağıdaki komutu kullanabilirsiniz:

    ```bash
    ./push_swap 5 2 8 1 | ./checker 5 2 8 1
    ```

    `push_swap` programının çıktısını `checker` programına yönlendirerek sıralamanın doğruluğunu kontrol edebilirsiniz.

7. Projeyi temizlemek için aşağıdaki komutu kullanabilirsiniz:

    ```bash
    make clean
    ```

    Bu komut, derleme sırasında oluşturulan geçici dosyaları temizler.

8. Projeyi sıfırlamak için aşağıdaki komutu kullanabilirsiniz:

    ```bash
    make fclean
    ```

    Bu komut, derleme sonrası oluşan dosyaları siler.

Bu adımları izleyerek "push_swap" projesini derleyebilir ve kullanabilirsiniz.
