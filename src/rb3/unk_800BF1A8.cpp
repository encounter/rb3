#include "string.hpp"
#include "filestream.hpp"
#include "unknown.hpp"
#include "std/string.h"

// fn_800C20FC
// probably inlined
const char* FileStream::GetStreamName(){
    return str.c_str();
}