// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the CAESARCYPHER_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// CAESARCYPHER_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#pragma once

#ifdef CAESARCYPHER_EXPORTS
#define CAESARCYPHER_API __declspec(dllexport)
#else
#define CAESARCYPHER_API __declspec(dllimport)
#endif

extern "C" CAESARCYPHER_API char* encrypt(char* source, int key);

extern "C" CAESARCYPHER_API char* decrypt(char* source, int key);

typedef char* (*encrypt_ptr_t)(char*, int);

typedef char* (*decrypt_ptr_t)(char*, int);