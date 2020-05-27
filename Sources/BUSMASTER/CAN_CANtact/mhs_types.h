#ifndef __CANtact_TYPES_H__
#define __CANtact_TYPES_H__

#include "DIL_Interface/IChangeRegisters.h"
#ifdef __cplusplus
extern "C" {
#endif

#define CANtact_STR_SIZE 255


	class TCANtactCanCfg :public IChangeRegisters
    {
	public:
		char m_CanSnrStr[CANtact_STR_SIZE];
		unsigned int m_CanSpeed;
		unsigned int m_CanBtrValue;
        BOOL m_bBitRateSelected;
	public:
		TCANtactCanCfg(char CanSnrStr[],unsigned int CanSpeed, unsigned int CanBtrValue, BOOL bBitRateSelected);
		~TCANtactCanCfg();
		int InvokeAdavancedSettings(PSCONTROLLER_DETAILS pControllerDetails, UINT nCount, UINT );
		DOUBLE vValidateBaudRate(DOUBLE ,int,UINT );
    };


#ifdef __cplusplus
}
#endif

#endif
