# depo3
Proje Açıklaması

Bu proje, C programlama dili kullanılarak geliştirilen metin tabanlı bir Hayatta Kalma Simülatörüdür. Oyuncu, karakterini çeşitli komutlarla yönlendirerek hayatta kalmaya çalışır. Simülasyon, enerji, sağlık ve envanter yönetimi gibi temel mekaniklere sahiptir ve oyuncudan alınan tek karakterlik komutlarla ilerler.

Program, bir komut dinleme döngüsü üzerinde çalışır ve oyuncu çıkış komutu verene kadar simülasyon devam eder. Avlanma, dinlenme, tehlike analizi gibi eylemler; rastgelelik, mantıksal operatörler ve aritmetik işlemlerle desteklenmiştir.

Özellikler

Switch–Case yapısıyla oluşturulmuş komut sistemi

Enerji, sağlık ve yemek miktarını içeren karakter durumu

Avlanma, sığınak arama, dinlenme gibi temel hayatta kalma aktiviteleri

Mantıksal operatörlerle başarı/başarısızlık hesaplamaları

Do-while döngüsü ile çalışan bir simülasyon

Şifre doğrulama ile engel aşma mekanizması

Rastgele tehlike seviyesi simülasyonu

Komutlar

Aşağıdaki tek karakterli komutlar oyun içinde kullanılabilir:

A — Avlan: Enerji azalır; yemek bulma, yaralanma veya başarısız olma ihtimali vardır.

S — Sığınak Ara: Mantıksal operatörlerle değerlendirilen bir ihtimal sistemine göre sonuçlanır.

E — Envanteri Görüntüle: Enerji, sağlık ve yemek miktarı oyuncuya gösterilir.

R — Dinlen: Enerji ve sağlık belirli bir oranda yenilenir.

F — Tehlike Seviyesi Analizi: Bölgedeki tehlike durumu döngü ile simüle edilir.

P — Şifreli İlerleme: Do-while ile şifre doğrulanana kadar giriş istenir.

X — Çıkış: Simülasyonu sonlandırır.

Oyun Mekanikleri

Avlanma sırasında enerji mutlaka azalır; başarı veya yaralanma durumu olasılıksal olarak belirlenir.

Dinlenme, enerji ve sağlık üzerinde pozitif etkiye sahiptir.

Tehlike seviyesi her kontrol edildiğinde rastgele belirlenir ve üç farklı risk seviyesinde sonuçlanabilir.

Şifreli ilerleme komutunda doğru şifre girilene kadar döngü devam eder.

Oyuncunun enerji veya sağlığı sıfıra düşerse simülasyon otomatik olarak sona erer.

Amaç

Projenin amacı, C programlama dilindeki temel kontrol yapıları, mantıksal ve aritmetik işlemler, döngüler ve karar yapılarının gerçek bir senaryo üzerinden uygulanmasıdır. Bu simülasyon, hem oyun mantığını hem de dilin temel prensiplerini anlamayı kolaylaştırır.

Notlar

Proje tamamen metin tabanlıdır ve herhangi bir grafik arayüz içermez.

Komutlar büyük harf ile kullanılmak üzere tasarlanmıştır.

Oyuncu komut vermediği sürece simülasyon ilerlemez; kontrol tamamen oyuncudadır.
