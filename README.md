# C++ Öğrenme Süreci

Bu repo, C++ dilini öğrenirken yazdığım temel kodları ve alıştırmaları içermektedir. Her bir dosya, C++'ın farklı bir konusunu ele almaktadır.

## Proje Dosyaları ve İçerikleri

- **1_helloWorld.cpp:** Ekrana "Merhaba Dünya" ve benzeri metinleri yazdıran temel C++ programı.
- **2_degiskenler.cpp:** `int`, `float`, `char`, `bool`, `string` gibi temel veri tiplerinin kullanımını ve kullanıcıdan `cin` ile veri almayı gösteren örnekler.
- **3_operatorler.cpp:** Aritmetik (`+`, `-`, `*`, `/`, `%`) ve karşılaştırma (`==`, `!=`, `<`, `>`) operatörlerinin kullanımını içeren alıştırmalar.
- **4_kosul_Ifadeler.cpp:** `if-else` ve `switch-case` yapılarıyla koşullu durumların nasıl yönetileceğini gösteren örnekler (sıcaklık durumuna göre yorum yapma, basit hesap makinesi).
- **5_donguler.cpp:** `for`, `while` ve `do-while` döngülerinin kullanımını gösteren alıştırmalar (çift/tek sayıları bulma, kullanıcıdan belirli bir koşul sağlanana kadar veri alma).
- **6_diziler.cpp:** Tek boyutlu dizilerin (`int notlar[5]`) nasıl tanımlandığını, elemanlarına nasıl erişildiğini ve diziler üzerinde temel işlemlerin (ortalama hesaplama, en büyük/en küçük elemanı bulma) nasıl yapıldığını gösteren örnekler.
- **7_stringler.cpp:** `string` veri tipi, `getline` ile satır okuma, `length()`, `find()`, `substr()` gibi temel string fonksiyonlarının kullanımı ve stringler üzerinde döngü ile işlem yapma.
- **8_cok_Boyutlu_Diziler.cpp:** İki boyutlu dizilerin (matrislerin) nasıl tanımlandığını, iç içe döngülerle nasıl işlendiğini ve matris toplama gibi temel işlemlerin nasıl yapıldığını gösteren örnekler.
- **9_0_fonksiyonlar.cpp:** Fonksiyonların nasıl tanımlandığını (prototip, parametreli/parametresiz, geriye değer döndüren/döndürmeyen) ve nasıl çağrıldığını gösteren temel örnekler.
- **9_1_hesapMak.cpp:** Fonksiyonları kullanarak modüler bir hesap makinesi programı.
- **9_2_faktöriyel.cpp:** Faktöriyel hesaplayan bir fonksiyon örneği.

## Nasıl Derlenir ve Çalıştırılır?

Her bir `.cpp` dosyasını aşağıdaki gibi derleyip çalıştırabilirsiniz:

```bash
g++ dosya_adi.cpp -o program_adi
./program_adi
```

Örneğin, `1_helloWorld.cpp` dosyasını derlemek için:

```bash
g++ 1_helloWorld.cpp -o hello
./hello
```
