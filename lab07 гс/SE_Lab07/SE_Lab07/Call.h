#pragma once
#ifndef CALL_H
#define CALL_H

namespace Call {
    // �������� �������, ������������ cdecl ����������
    int cdeclCall(int a, int b, int c);

    // �������� �������, ������������ _stdcall ����������
    int __stdcall stdcallCall(int& a, int b, int c);

    // �������� �������, ������������ _fastcall ����������
    int __fastcall fastcallCall(int a, int b, int c, int d);
}

#endif // CALL_H