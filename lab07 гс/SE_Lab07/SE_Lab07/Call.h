#pragma once
#ifndef CALL_H
#define CALL_H

namespace Call {
    // Прототип функции, использующей cdecl соглашение
    int cdeclCall(int a, int b, int c);

    // Прототип функции, использующей _stdcall соглашение
    int __stdcall stdcallCall(int& a, int b, int c);

    // Прототип функции, использующей _fastcall соглашение
    int __fastcall fastcallCall(int a, int b, int c, int d);
}

#endif // CALL_H