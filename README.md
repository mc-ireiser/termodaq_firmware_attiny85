# termodaq_firmware_attiny85

[![Codacy Badge](https://api.codacy.com/project/badge/Grade/8c47ff9dca544d889fdfc33aea2cdfe1)](https://app.codacy.com/app/mc.ireiser/termodaq_firmware_attiny85?utm_source=github.com&utm_medium=referral&utm_content=mc-ireiser/termodaq_firmware_attiny85&utm_campaign=Badge_Grade_Dashboard)
[![FOSSA Status](https://app.fossa.io/api/projects/git%2Bgithub.com%2Fmc-ireiser%2Ftermodaq_firmware_attiny85.svg?type=shield)](https://app.fossa.io/projects/git%2Bgithub.com%2Fmc-ireiser%2Ftermodaq_firmware_attiny85?ref=badge_shield)

Firmware termoDaQ para el microcontrolador ATtiny85

## Como iniciar

Clone o Descarge el **Repositorio**.

Si Clona:
> Entre en la carpeta termodaq_firmware_attiny85-master.

Si Descarga:
> Descomprima el archivo descargado, luego entre en la carpeta termodaq_firmware_attiny85-master.

### Instalar Arduino IDE

Descargue el IDE desde la web oficial arduino.cc

```text
https://www.arduino.cc/en/Main/Software
```

### Instalar el Arduino Core para ATtiny

Recomiendo ATTinyCore de SpenceKonde, los pasos a seguir se encuentran en su repositorio

```text
https://github.com/SpenceKonde/ATTinyCore/blob/master/Installation.md
```

### Configure su IDE

  Herramientas > Placa: "ATtiny25/45/85"

  Herramientas > Chip: "ATtiny85"

  Herramientas > Clock: "16Mhz (external)"

  Herramientas > Programador: "USBtityISP (ATTinyCore)"

### Compilar

Si todo es configurado de forma correcta se espera un resultado similar al siguiente:

```bash
Opciones de compilación cambiadas, reconstruyendo todo
El Sketch usa 1932 bytes (23%) del espacio de almacenamiento de programa. El máximo es 8192 bytes.
Las variables Globales usan 20 bytes (3%) de la memoria dinámica, dejando 492 bytes para las variables locales. El máximo es 512 bytes.
```

## License

[![FOSSA Status](https://app.fossa.io/api/projects/git%2Bgithub.com%2Fmc-ireiser%2Ftermodaq_firmware_attiny85.svg?type=large)](https://app.fossa.io/projects/git%2Bgithub.com%2Fmc-ireiser%2Ftermodaq_firmware_attiny85?ref=badge_large)
