/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * File Name          : TouchGFXDataReader.hpp
  ******************************************************************************
  * This file was created by TouchGFX Generator 4.23.2. This file is only
  * generated once! Delete this file from your project and re-generate code
  * using STM32CubeMX or change this file manually to update it.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

#ifndef TouchGFXDataReader_HPP
#define TouchGFXDataReader_HPP

/* USER CODE BEGIN TouchGFXDataReader.hpp */

#include <TouchGFXGeneratedDataReader.hpp>

/**
 * This class is an abstract interface for a class reading data from a flash. The flash can be
 * any type, but is mostly used for flashes that are not memory mapped. Applications
 * must implement access to the flash through this interface.
 */
class TouchGFXDataReader : public TouchGFXGeneratedDataReader
{
public:
    /** Finalizes an instance of the TouchGFXDataReader class. */
    virtual ~TouchGFXDataReader()
    {
    }

    /**
     * Compute if an address is directly addressable by the MCU.
     *
     * Compute if an address is directly addressable by the MCU. The data is addressable it
     * should be read direct through a pointer and not through this interface.
     *
     * @param  address The address in the flash.
     *
     * @return True if the address is addressable by the MCU.
     */
    virtual bool addressIsAddressable(const void* address);

    /**
     * Copy data from flash to a buffer. This must be a synchrony method that does not
     * return until the copy is done.
     *
     * @param          src   Address of source data in the flash.
     * @param [in,out] dst   Address of destination buffer in RAM.
     * @param          bytes Number of bytes to copy.
     */
    virtual void copyData(const void* src, void* dst, uint32_t bytes);

    /**
     * Initiate a read operation from flash to a buffer. This can be an asynchrony operation
     * that is still running after this function returns. Buffers must be handled by the
     * subclass. LCD16bppSerialFlash will at most copy 4 bytes times the width of the
     * display.
     *
     * @param  src   Address of source data in the flash.
     * @param  bytes Number of bytes to copy.
     */
    virtual void startFlashLineRead(const void* src, uint32_t bytes);

    /**
     * Waits until the previous startFlashLineRead operation is complete.
     *
     * Waits until the previous startFlashLineRead operation is complete. If the
     * startFlashLineRead method is asynchrony, this method must wait until the previous
     * operation has completed.
     *
     * @return The address of a buffer containing the read data.
     */
    virtual const uint8_t* waitFlashReadComplete();

};

/* USER CODE END TouchGFXDataReader.hpp */

#endif /* TouchGFXDataReader_HPP */
