#pragma once

namespace Call {
	int _cdecl mul(int x, int y, int z) { return x + y + z; };
	int _stdcall sub(int& x, int y, int z) { return x * y * z; };
	int _fastcall wex(int x, int y, int z, int j) { return x + y + z + j; };
}