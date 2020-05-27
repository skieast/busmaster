#ifndef __MHS_BM_CFG_H__
#define __MHS_BM_CFG_H__

#include "mhs_types.h"

#ifdef __cplusplus
extern "C" {
#endif

    //int WINAPI ShowCanSetup(HWND hwnd, struct TMhsCanCfg* setup);
	int WINAPI ShowCanSetup(HWND hwnd, struct TCANtactCanCfg* setup) { return 0; }

#ifdef __cplusplus
}
#endif

#endif