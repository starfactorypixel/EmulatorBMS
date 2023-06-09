#include <Arduino.h>

#define LED_BUILTIN PC13


struct params_t
{
    uint32_t header = 0xAA55AAFF;            // Заголовок пакета.
    uint16_t voltage_1 = 0x0123;         // Напряжение на 1 ячейки, мВ.
    uint16_t voltage_2;         // Напряжение на 2 ячейки, мВ.
    uint16_t voltage_3;         // Напряжение на 3 ячейки, мВ.
    uint16_t voltage_4;         // Напряжение на 4 ячейки, мВ.
    uint16_t voltage_5;         // Напряжение на 5 ячейки, мВ.
    uint16_t voltage_6;         // Напряжение на 6 ячейки, мВ.
    uint16_t voltage_7;         // Напряжение на 7 ячейки, мВ.
    uint16_t voltage_8;         // Напряжение на 8 ячейки, мВ.
    uint16_t voltage_9;         // Напряжение на 9 ячейки, мВ.
    uint16_t voltage_10;        // Напряжение на 10 ячейки, мВ.
    uint16_t voltage_11;        // Напряжение на 11 ячейки, мВ.
    uint16_t voltage_12;        // Напряжение на 12 ячейки, мВ.
    uint16_t voltage_13;        // Напряжение на 13 ячейки, мВ.
    uint16_t voltage_14;        // Напряжение на 14 ячейки, мВ.
    uint16_t voltage_15;        // Напряжение на 15 ячейки, мВ.
    uint16_t voltage_16;        // Напряжение на 16 ячейки, мВ.
    uint16_t voltage_17;        // Напряжение на 17 ячейки, мВ.
    uint16_t voltage_18;        // Напряжение на 18 ячейки, мВ.
    uint16_t voltage_19;        // Напряжение на 19 ячейки, мВ.
    uint16_t voltage_20;        // Напряжение на 20 ячейки, мВ.
    uint16_t voltage_21;        // Напряжение на 21 ячейки, мВ.
    uint16_t voltage_22;        // Напряжение на 22 ячейки, мВ.
    uint16_t voltage_23;        // Напряжение на 23 ячейки, мВ.
    uint16_t voltage_24;        // Напряжение на 24 ячейки, мВ.
    uint16_t voltage_25;        // Напряжение на 25 ячейки, мВ.
    uint16_t voltage_26;        // Напряжение на 26 ячейки, мВ.
    uint16_t voltage_27;        // Напряжение на 27 ячейки, мВ.
    uint16_t voltage_28;        // Напряжение на 28 ячейки, мВ.
    uint16_t voltage_29;        // Напряжение на 29 ячейки, мВ.
    uint16_t voltage_30;        // Напряжение на 30 ячейки, мВ.
    uint16_t voltage_31;        // Напряжение на 31 ячейки, мВ.
    uint16_t voltage_32;        // Напряжение на 32 ячейки, мВ.
    uint16_t voltage_33;        // Напряжение на всей АКБ, мВ.	
    int32_t current;            // Ток разряда иди заряда, мА.
    uint8_t percent;            // Оставшаяся ёмкость АКБ, проценты.
    uint32_t phy_capacity;      // Фактическая ёмкость АКБ, мА/ч.
    uint32_t rem_capacity;      // Оставшаяся ёмкость АКБ, мА/ч.
    uint32_t cycle_capacity;    // WAT?
    uint32_t uptime;            // Кол-во времени с питанием, секунд.
    int16_t temp_1 = 0x012;            // Температура датчика 1, Градусы.
    int16_t temp_2 = 0x015;             // Температура датчика 2, Градусы.
    int16_t temp_3;             // Температура датчика 3, Градусы.
    int16_t temp_4;             // Температура датчика 4, Градусы.
    int16_t temp_5;             // Температура датчика 5, Градусы.
    int16_t temp_6;             // Температура датчика 6, Градусы.
    uint8_t charge_fet;         // Флаг состояние ключа зарядки.
    uint8_t dcharge_fet;        // Флаг состояние ключа разрядки.
    uint8_t balanced;           // Флаг состояние балансировки.
    uint16_t tire_length;       // WAT?
    uint16_t pulses_num;        // WAT?
    uint8_t relay;              // WAT?
    uint32_t power;             // Текущая мощность, Вт.
    uint8_t vmax_bat;           // Номер батарее с максимальный напряжением.
    uint16_t vmax;              // Напряжение батареи с максимальным напряжением, мВ.
    uint8_t vmin_bat;           // Номер батарее с минимальным напряжением.
    uint16_t vin;               // Напряжение батареи с минимальным напряжением, мВ.
    uint16_t vmid;              // Среднее напряжение батареи, мВ.
    uint8_t wat_123;            // WAT?
    uint16_t dcharge_fet_lost;  // Падение на транзисторе нагрузки, В.
    uint16_t dcharge_fet_v;     // Напряжение на затворе транзистора нагрузки, В.
    uint16_t charge_fet_v;      // Напряжение на затворе транзистора зарядки, В.
    uint16_t wat_130131;        // WAT?
    uint32_t balance_bits;      // Флаги сбалансированных ячеек.
    uint16_t logs;              // WAT?
    uint16_t crc;               // Контрольная сумма.
} params;		// 	140

params_t par;

void setup() {
// put your setup code here, to run once:
pinMode(LED_BUILTIN, OUTPUT);
Serial.begin(115200);
unsigned char buf[140];

memcpy(buf, &par, 140 );

Serial.write(buf,140);
}

void loop() {
int d = 500;
digitalWrite(LED_BUILTIN, HIGH);
delay(d);
digitalWrite(LED_BUILTIN, LOW);
delay(d);
}