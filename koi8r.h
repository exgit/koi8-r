#pragma once


#include <stdlib.h>


size_t koi8r_to_utf8(const char *str, char *buf, size_t size);
size_t koi8r_to_866(const char *str, char *buf, size_t size);
size_t koi8r_to_1251(const char *str, char *buf, size_t size);
