#ifndef SPI1_DRIVER_H
#define SPI1_DRIVER_H

#include "spi_driver_base.h"

// SPI1 driver class
class SPI1Driver : public SPIDriverBase {
public:
    SPI1Driver();
    void init() override;

    // void IRAM_ATTR gpio_isr_handler() override;
};

#endif // SPI1_DRIVER_H