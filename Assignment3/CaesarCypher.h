
#ifdef CAESARCYPHER_EXPORTS
#define CAESARCYPHER_API __declspec(dllexport)
#else
#define CAESARCYPHER_API __declspec(dllimport)
#endif

extern "C" CAESARCYPHER_API char* encrypt(char* source, int key);

extern "C" CAESARCYPHER_API char* decrypt(char* source, int key);

typedef char* (*encrypt_ptr_t)(char*, int);

typedef char* (*decrypt_ptr_t)(char*, int);