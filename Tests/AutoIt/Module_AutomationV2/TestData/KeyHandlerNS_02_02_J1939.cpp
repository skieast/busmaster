/* This file is generated by BUSMASTER */
/* VERSION [1.1] */
/* BUSMASTER VERSION [1.9.0] */
/* PROTOCOL [J1939] */

/* Start J1939 include header */
#include <Windows.h>
#include <J1939Includes.h>

/* End J1939 include header */


/* Start J1939 global variable */

/* End J1939 global variable */


/* Start J1939 Function Prototype  */
GCC_EXTERN void GCC_EXPORT OnKey_a(unsigned char KeyValue);
/* End J1939 Function Prototype  */

/* Start J1939 generated function - OnKey_a */
void OnKey_a(unsigned char KeyValue)
{
STJ1939_MSG msg1;


msg1.m_sMsgProperties.m_byChannel = 1;

msg1.m_sMsgProperties.m_eType = MSG_TYPE_DATA;

msg1.m_sMsgProperties.m_eDirection = DIR_TX;


msg1.m_sMsgProperties.m_uExtendedID.m_s29BitId.m_bySrcAddress = 5;


msg1.m_unDLC = 5;

msg1.m_pbyData = new BYTE[15];
BYTE tmp[] = {13, 35, 46, 57, 79};

memcpy(msg1.m_pbyData, tmp, 5);

Trace("J1939 msg Handler 1");

SendMsg (&msg1);
}/* End J1939 generated function - OnKey_a */
