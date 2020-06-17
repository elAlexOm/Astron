
/** \file   usb_ulpi_access.h
*/

#pragma once

/** @brief  Read CR value
  * @param  Addr the Address of the ULPI Register
  * @retval Returns value of PHY CR register
  */
uint32_t USB_ULPI_Read( uint32_t Addr );

/** @brief  Write CR value
  * @param  Addr the Address of the ULPI Register
  * @param  Data Data to write
  * @retval Returns value of PHY CR register
  */
uint32_t USB_ULPI_Write( uint32_t Addr, uint32_t Data );
