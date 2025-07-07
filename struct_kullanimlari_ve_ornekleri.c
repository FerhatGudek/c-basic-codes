/* Bugün arkadaşlar c programında struct vs gibi fonksiyonları kullanarak bir kod dizesi oluşturcaz isterseniz hemen başlayalım */
#include <stdio.h>

enum Seviyeler {
    DUSUK = 12,
    ORTA = 14,
    YUKSEK =35
};

int main() {
    enum Seviyeler odasicakligi = DUSUK;
    printf("%d\n", odasicakligi);
    return 0;
}