
#include "hm_bt_persistence_hal.h"
#include "hmbtcore.h"
#include "hm_bt_debug_hal.h"
#include <string.h>

uint32_t hm_bt_persistence_hal_get_serial(uint8_t *serial){

  jbyteArray serial_ = (*envRef)->NewByteArray(envRef,9);
  (*envRef)->SetByteArrayRegion(envRef, serial_, 0, 9, (const jbyte*) serial );
  jint ret = (*envRef)->CallIntMethod(envRef, coreInterfaceRef, interfaceMethodHMPersistenceHalgetSerial, serial_);

  jbyte* content_array = (*envRef)->GetByteArrayElements(envRef, serial_, NULL);
  memcpy(serial,content_array,9);

  return ret;
}

uint32_t hm_bt_persistence_hal_get_local_public_key(uint8_t *public){

  jbyteArray public_ = (*envRef)->NewByteArray(envRef,64);
  (*envRef)->SetByteArrayRegion(envRef, public_, 0, 64, (const jbyte*) public );
  jint ret = (*envRef)->CallIntMethod(envRef, coreInterfaceRef, interfaceMethodHMPersistenceHalgetLocalPublicKey, public_);

  jbyte* content_array = (*envRef)->GetByteArrayElements(envRef, public_, NULL);
  memcpy(public,content_array,64);

  return ret;
}

uint32_t hm_bt_persistence_hal_get_local_private_key(uint8_t *private){

  jbyteArray private_ = (*envRef)->NewByteArray(envRef,32);
  (*envRef)->SetByteArrayRegion(envRef, private_, 0, 32, (const jbyte*) private );
  jint ret = (*envRef)->CallIntMethod(envRef, coreInterfaceRef, interfaceMethodHMPersistenceHalgetLocalPrivateKey, private_);

  jbyte* content_array = (*envRef)->GetByteArrayElements(envRef, private_, NULL);
  memcpy(private,content_array,32);

  return ret;
}

uint32_t hm_bt_persistence_hal_get_device_certificate(uint8_t *cert){

  jbyteArray cert_ = (*envRef)->NewByteArray(envRef,153);
  (*envRef)->SetByteArrayRegion(envRef, cert_, 0, 153, (const jbyte*) cert );
  jint ret = (*envRef)->CallIntMethod(envRef, coreInterfaceRef, interfaceMethodHMPersistenceHalgetDeviceCertificate, cert_);

  jbyte* content_array = (*envRef)->GetByteArrayElements(envRef, cert_, NULL);
  memcpy(cert,content_array,153);

  return ret;
}

uint32_t hm_bt_persistence_hal_get_ca_public_key(uint8_t *public){

  jbyteArray public_ = (*envRef)->NewByteArray(envRef,64);
  (*envRef)->SetByteArrayRegion(envRef, public_, 0, 64, (const jbyte*) public );
  jint ret = (*envRef)->CallIntMethod(envRef, coreInterfaceRef, interfaceMethodHMPersistenceHalgetCaPublicKey, public_);

  jbyte* content_array = (*envRef)->GetByteArrayElements(envRef, public_, NULL);
  memcpy(public,content_array,64);

  return ret;
}

uint32_t hm_bt_persistence_hal_get_oem_ca_public_key(uint8_t *public){
  jbyteArray public_ = (*envRef)->NewByteArray(envRef,64);
  (*envRef)->SetByteArrayRegion(envRef, public_, 0, 64, (const jbyte*) public );
  jint ret = (*envRef)->CallIntMethod(envRef, coreInterfaceRef, interfaceMethodHMPersistenceHalgetOEMCaPublicKey, public_);

  jbyte* content_array = (*envRef)->GetByteArrayElements(envRef, public_, NULL);
  memcpy(public,content_array,64);

  return ret;
}

uint32_t hm_bt_persistence_hal_add_access_certificate(uint8_t *serial, uint8_t *public, uint8_t *startDate, uint8_t *endDate, uint8_t commandSize, uint8_t *command){

  jbyteArray serial_ = (*envRef)->NewByteArray(envRef,9);
  (*envRef)->SetByteArrayRegion(envRef, serial_, 0, 9, (const jbyte*) serial );

  jbyteArray public_ = (*envRef)->NewByteArray(envRef,64);
  (*envRef)->SetByteArrayRegion(envRef, public_, 0, 64, (const jbyte*) public );

  jbyteArray startDate_ = (*envRef)->NewByteArray(envRef,5);
  (*envRef)->SetByteArrayRegion(envRef, startDate_, 0, 5, (const jbyte*) startDate );

  jbyteArray endDate_ = (*envRef)->NewByteArray(envRef,5);
  (*envRef)->SetByteArrayRegion(envRef, endDate_, 0, 5, (const jbyte*) endDate );

  jbyteArray command_ = (*envRef)->NewByteArray(envRef,commandSize);
  (*envRef)->SetByteArrayRegion(envRef, command_, 0, commandSize, (const jbyte*) command );

  jint ret = (*envRef)->CallIntMethod(envRef, coreInterfaceRef, interfaceMethodHMPersistenceHaladdPublicKey, serial_, public_, startDate_, endDate_, commandSize, command_);

  return ret;
}

uint32_t hm_bt_persistence_hal_get_access_certificate_count(uint8_t *count){

  jintArray count_ = (*envRef)->NewIntArray(envRef,1);
  (*envRef)->SetIntArrayRegion(envRef, count_, 0, 1, (const jint*) count );

  jint ret = (*envRef)->CallIntMethod(envRef, coreInterfaceRef, interfaceMethodHMPersistenceHalgetPublicKeyCount, count_);

  if(ret != 0){
    return ret;
  }

  jint* count_array = (*envRef)->GetIntArrayElements(envRef, count_, NULL);
  *count = count_array[0];

  return ret;
}

uint32_t hm_bt_persistence_hal_get_access_certificate(uint8_t *serial, uint8_t *public, uint8_t *startDate, uint8_t *endDate, uint8_t *commandSize, uint8_t *command){

  jbyteArray serial_ = (*envRef)->NewByteArray(envRef,9);
  (*envRef)->SetByteArrayRegion(envRef, serial_, 0, 9, (const jbyte*) serial );

  jbyteArray public_ = (*envRef)->NewByteArray(envRef,64);
  (*envRef)->SetByteArrayRegion(envRef, public_, 0, 64, (const jbyte*) public );

  jbyteArray startDate_ = (*envRef)->NewByteArray(envRef,5);
  (*envRef)->SetByteArrayRegion(envRef, startDate_, 0, 5, (const jbyte*) startDate );

  jbyteArray endDate_ = (*envRef)->NewByteArray(envRef,5);
  (*envRef)->SetByteArrayRegion(envRef, endDate_, 0, 5, (const jbyte*) endDate );

  jbyteArray command_ = (*envRef)->NewByteArray(envRef,16);
  (*envRef)->SetByteArrayRegion(envRef, command_, 0, 16, (const jbyte*) command );

  jintArray commandSize_ = (*envRef)->NewIntArray(envRef,1);
  (*envRef)->SetIntArrayRegion(envRef, commandSize_, 0, 1, (const jint*) commandSize );

  jint ret = (*envRef)->CallIntMethod(envRef, coreInterfaceRef, interfaceMethodHMPersistenceHalgetPublicKey, serial_, public_, startDate_, endDate_, commandSize_, command_);

  if(ret != 0){
    return ret;
  }

  jbyte* serial_array = (*envRef)->GetByteArrayElements(envRef, serial_, NULL);
  memcpy(serial,serial_array,9);

  jbyte* public_array = (*envRef)->GetByteArrayElements(envRef, public_, NULL);
  memcpy(public,public_array,64);

  jbyte* startDate_array = (*envRef)->GetByteArrayElements(envRef, startDate_, NULL);
  memcpy(startDate,startDate_array,5);

  jbyte* endDate_array = (*envRef)->GetByteArrayElements(envRef, endDate_, NULL);
  memcpy(endDate,endDate_array,5);

  jint* size_array = (*envRef)->GetIntArrayElements(envRef, commandSize_, NULL);
  *commandSize = size_array[0];

  jbyte* command_array = (*envRef)->GetByteArrayElements(envRef, command_, NULL);
  memcpy(command,command_array,*commandSize);

  return ret;
}

uint32_t hm_bt_persistence_hal_get_access_certificate_by_index(uint8_t index, uint8_t *serial, uint8_t *public, uint8_t *startDate, uint8_t *endDate, uint8_t *commandSize, uint8_t *command){

  jbyteArray serial_ = (*envRef)->NewByteArray(envRef,9);
  (*envRef)->SetByteArrayRegion(envRef, serial_, 0, 9, (const jbyte*) serial );

  jbyteArray public_ = (*envRef)->NewByteArray(envRef,64);
  (*envRef)->SetByteArrayRegion(envRef, public_, 0, 64, (const jbyte*) public );

  jbyteArray startDate_ = (*envRef)->NewByteArray(envRef,5);
  (*envRef)->SetByteArrayRegion(envRef, startDate_, 0, 5, (const jbyte*) startDate );

  jbyteArray endDate_ = (*envRef)->NewByteArray(envRef,5);
  (*envRef)->SetByteArrayRegion(envRef, endDate_, 0, 5, (const jbyte*) endDate );

  jbyteArray command_ = (*envRef)->NewByteArray(envRef,16);
  (*envRef)->SetByteArrayRegion(envRef, command_, 0, 16, (const jbyte*) command );

  jintArray commandSize_ = (*envRef)->NewIntArray(envRef,1);
  (*envRef)->SetIntArrayRegion(envRef, commandSize_, 0, 1, (const jint*) commandSize );

  jint ret = (*envRef)->CallIntMethod(envRef, coreInterfaceRef, interfaceMethodHMPersistenceHalgetPublicKeyByIndex, index, serial_, public_, startDate_, endDate_, commandSize_, command_);

  if(ret != 0){
    return ret;
  }

  jbyte* serial_array = (*envRef)->GetByteArrayElements(envRef, serial_, NULL);
  memcpy(serial,serial_array,9);

  jbyte* public_array = (*envRef)->GetByteArrayElements(envRef, public_, NULL);
  memcpy(public,public_array,64);

  jbyte* startDate_array = (*envRef)->GetByteArrayElements(envRef, startDate_, NULL);
  memcpy(startDate,startDate_array,5);

  jbyte* endDate_array = (*envRef)->GetByteArrayElements(envRef, endDate_, NULL);
  memcpy(endDate,endDate_array,5);

  jint* size_array = (*envRef)->GetIntArrayElements(envRef, commandSize_, NULL);
  *commandSize = size_array[0];

  jbyte* command_array = (*envRef)->GetByteArrayElements(envRef, command_, NULL);
  memcpy(command,command_array,*commandSize);

  return ret;
}

uint32_t hm_bt_persistence_hal_remove_access_certificate(uint8_t *serial){

  jbyteArray serial_ = (*envRef)->NewByteArray(envRef,9);
  (*envRef)->SetByteArrayRegion(envRef, serial_, 0, 9, (const jbyte*) serial );
  jint ret = (*envRef)->CallIntMethod(envRef, coreInterfaceRef, interfaceMethodHMPersistenceHalremovePublicKey, serial_);

  return ret;
}

uint32_t hm_bt_persistence_hal_add_stored_certificate(uint8_t *cert, uint16_t size){

  jbyteArray cert_ = (*envRef)->NewByteArray(envRef,9);
  (*envRef)->SetByteArrayRegion(envRef, cert_, 0, 9, (const jbyte*) cert );
  jint ret = (*envRef)->CallIntMethod(envRef, coreInterfaceRef, interfaceMethodHMPersistenceHaladdStoredCertificate, cert_, size);

  return ret;
}

uint32_t hm_bt_persistence_hal_get_stored_certificate(uint8_t *serial, uint8_t *cert, uint16_t *size){

  jbyteArray serial_ = (*envRef)->NewByteArray(envRef,9);
  (*envRef)->SetByteArrayRegion(envRef, serial_, 0, 9, (const jbyte*) serial );

  jbyteArray cert_ = (*envRef)->NewByteArray(envRef,180);
  (*envRef)->SetByteArrayRegion(envRef, cert_, 0, 180, (const jbyte*) cert );

  jintArray size_ = (*envRef)->NewIntArray(envRef,1);
  (*envRef)->SetIntArrayRegion(envRef, size_, 0, 1, (const jint*) size );

  jint ret = (*envRef)->CallIntMethod(envRef, coreInterfaceRef, interfaceMethodHMPersistenceHalgetStoredCertificate, serial_, cert_, size_);

  jint* size_array = (*envRef)->GetIntArrayElements(envRef, size_, NULL);
  *size = size_array[0];

  jbyte* content_array = (*envRef)->GetByteArrayElements(envRef, cert_, NULL);
  memcpy(cert,content_array,*size);

  return ret;
}

uint32_t hm_bt_persistence_hal_erase_stored_certificate(uint8_t *serial){

  jbyteArray serial_ = (*envRef)->NewByteArray(envRef,9);
  (*envRef)->SetByteArrayRegion(envRef, serial_, 0, 9, (const jbyte*) serial );
  jint ret = (*envRef)->CallIntMethod(envRef, coreInterfaceRef, interfaceMethodHMPersistenceHaleraseStoredCertificate, serial_);

  return ret;
}

uint32_t hm_bt_persistence_hal_get_appid_for_issuer_count(uint8_t *issuer, uint8_t *count){
 return 0;
}

uint32_t hm_bt_persistence_hal_get_appid_for_issuer(uint8_t *issuer, uint8_t index, uint8_t *appid){
 return 0;
}

uint32_t hm_bt_persistence_hel_set_command_count(uint8_t *serial, uint8_t command, uint8_t count){
  return 0;
}

uint32_t hm_bt_persistence_hel_get_command_count(uint8_t *serial, uint8_t command, uint8_t *count){
  return 0;
}

uint32_t hm_bt_persistence_hel_remove_all_command_counts(uint8_t *serial){
  return 0;
}
