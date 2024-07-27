/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * File Name          : TouchGFXDataReader.cpp
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

#include <TouchGFXDataReader.hpp>

/* USER CODE BEGIN TouchGFXDataReader.cpp */

bool TouchGFXDataReader::addressIsAddressable(const void* address)
{
    // Calling parent implementation of addressIsAddressable().
    //
    // To overwrite the generated implementation, omit call to parent function
    // and implemented needed functionality here.

    return TouchGFXGeneratedDataReader::addressIsAddressable(address);
}

void TouchGFXDataReader::copyData(const void* src, void* dst, uint32_t bytes)
{
    // Calling parent implementation of copyData().
    //
    // To overwrite the generated implementation, omit call to parent function
    // and implemented needed functionality here.

    TouchGFXGeneratedDataReader::copyData(src, dst, bytes);
}

void TouchGFXDataReader::startFlashLineRead(const void* src, uint32_t bytes)
{
    // Calling parent implementation of startFlashLineRead().
    //
    // To overwrite the generated implementation, omit call to parent function
    // and implemented needed functionality here.

    TouchGFXGeneratedDataReader::startFlashLineRead(src, bytes);
}

const uint8_t* TouchGFXDataReader::waitFlashReadComplete()
{
    // Calling parent implementation of waitFlashReadComplete().
    //
    // To overwrite the generated implementation, omit call to parent function
    // and implemented needed functionality here.

    return TouchGFXGeneratedDataReader::waitFlashReadComplete();
}

extern "C" {
    /* ******************************************************
     * Functions required by DataReader Strategy
     * ******************************************************
     *
     *  *  uint8_t isTransmittingData() must return whether or not data is currently being transmitted, over e.g. SPI.
     *  *  void transmitFrameBufferBlock(uint8_t* pixels, uint16_t x, uint16_t y, uint16_t w, uint16_t h) will be called
     *       when the framework wants to send a block. The user must then transfer
     *       the data represented by the arguments.
     *
     *  A user must call touchgfx::startNewTransfer(); once transmitFrameBufferBlock() has succesfully sent a block.
     *  E.g. if using DMA to transfer the block, this could be called in the "Transfer Completed" interrupt handler.
     *
     * Remove the preprocessor warning directives in each __attribute__((weak)) declared function after implementation.
     *
     */

    __attribute__((weak)) void DataReader_WaitForReceiveDone()
    {
#warning "weak defined implementation for void DataReader_WaitForReveiceDone().\
Implement functionality here or create void DataReader_WaitForReveiceDone() togeher with DataReader driver code."
    }

    __attribute__((weak)) void DataReader_ReadData(uint32_t address24, uint8_t* buffer, uint32_t length)
    {
#warning "weak defined implementation for void DataReader_ReadData(uint32_t address24, uint8_t* buffer, uint32_t length).\
Implement functionality here or create void DataReader_ReadData(uint32_t address24, uint8_t* buffer, uint32_t length) togeher with DataReader driver code."
    }

    __attribute__((weak)) void DataReader_StartDMAReadData(uint32_t address24, uint8_t* buffer, uint32_t length)
    {
#warning "weak defined implementation for void DataReader_StartDMAReadData(uint32_t address24, uint8_t* buffer, uint32_t length).\
Implement functionality here or create void DataReader_StartDMAReadData(uint32_t address24, uint8_t* buffer, uint32_t length) togeher with DataReader driver code."
    }
}

/* USER CODE END TouchGFXDataReader.cpp */
