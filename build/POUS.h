#include "beremiz.h"
#ifndef __POUS_H
#define __POUS_H

#include "accessor.h"
#include "iec_std_lib.h"

__DECLARE_ENUMERATED_TYPE(LOGLEVEL,
  LOGLEVEL__CRITICAL,
  LOGLEVEL__WARNING,
  LOGLEVEL__INFO,
  LOGLEVEL__DEBUG
)
__DECLARE_ENUMERATED_TYPE(SUPERSTATESENUM,
  SUPERSTATESENUM__ST_INICIALIZACE,
  SUPERSTATESENUM__ST_RESET_POSITION_OF_MOTORS,
  SUPERSTATESENUM__ST_WAIT_FOR_COMMAND,
  SUPERSTATESENUM__ST_MODE_SELECTION,
  SUPERSTATESENUM__ST_MANUAL_MODE,
  SUPERSTATESENUM__ST_AUTOMATIC_MODE,
  SUPERSTATESENUM__ST_CHECK_POSITION_OF_MOTORS,
  SUPERSTATESENUM__ST_STOP,
  SUPERSTATESENUM__ST_EMERGENCY_STOP
)
// FUNCTION_BLOCK LOGGER
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(BOOL,TRIG)
  __DECLARE_VAR(STRING,MSG)
  __DECLARE_VAR(LOGLEVEL,LEVEL)

  // FB private variables - TEMP, private and located variables
  __DECLARE_VAR(BOOL,TRIG0)

} LOGGER;

void LOGGER_init__(LOGGER *data__, BOOL retain);
// Code part
void LOGGER_body__(LOGGER *data__);
// FUNCTION_BLOCK PYTHON_EVAL
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(BOOL,TRIG)
  __DECLARE_VAR(STRING,CODE)
  __DECLARE_VAR(BOOL,ACK)
  __DECLARE_VAR(STRING,RESULT)

  // FB private variables - TEMP, private and located variables
  __DECLARE_VAR(DWORD,STATE)
  __DECLARE_VAR(STRING,BUFFER)
  __DECLARE_VAR(STRING,PREBUFFER)
  __DECLARE_VAR(BOOL,TRIGM1)
  __DECLARE_VAR(BOOL,TRIGGED)

} PYTHON_EVAL;

void PYTHON_EVAL_init__(PYTHON_EVAL *data__, BOOL retain);
// Code part
void PYTHON_EVAL_body__(PYTHON_EVAL *data__);
// FUNCTION_BLOCK PYTHON_POLL
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(BOOL,TRIG)
  __DECLARE_VAR(STRING,CODE)
  __DECLARE_VAR(BOOL,ACK)
  __DECLARE_VAR(STRING,RESULT)

  // FB private variables - TEMP, private and located variables
  __DECLARE_VAR(DWORD,STATE)
  __DECLARE_VAR(STRING,BUFFER)
  __DECLARE_VAR(STRING,PREBUFFER)
  __DECLARE_VAR(BOOL,TRIGM1)
  __DECLARE_VAR(BOOL,TRIGGED)

} PYTHON_POLL;

void PYTHON_POLL_init__(PYTHON_POLL *data__, BOOL retain);
// Code part
void PYTHON_POLL_body__(PYTHON_POLL *data__);
// FUNCTION_BLOCK PYTHON_GEAR
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(UINT,N)
  __DECLARE_VAR(BOOL,TRIG)
  __DECLARE_VAR(STRING,CODE)
  __DECLARE_VAR(BOOL,ACK)
  __DECLARE_VAR(STRING,RESULT)

  // FB private variables - TEMP, private and located variables
  PYTHON_EVAL PY_EVAL;
  __DECLARE_VAR(UINT,COUNTER)
  __DECLARE_VAR(UINT,ADD10_OUT)
  __DECLARE_VAR(BOOL,EQ13_OUT)
  __DECLARE_VAR(UINT,SEL15_OUT)
  __DECLARE_VAR(BOOL,AND7_OUT)

} PYTHON_GEAR;

void PYTHON_GEAR_init__(PYTHON_GEAR *data__, BOOL retain);
// Code part
void PYTHON_GEAR_body__(PYTHON_GEAR *data__);
__DECLARE_ARRAY_TYPE(__ARRAY_OF_BYTE_8,BYTE,[8])
__DECLARE_ARRAY_TYPE(__ARRAY_OF_INT_9,INT,[9])
__DECLARE_ARRAY_TYPE(__ARRAY_OF_BOOL_8,BOOL,[8])
// PROGRAM SUPERSTAVY
// Data part
typedef struct {
  // PROGRAM Interface - IN, OUT, IN_OUT variables

  // PROGRAM private variables - TEMP, private and located variables
  __DECLARE_VAR(BOOL,I_START)
  __DECLARE_VAR(BOOL,I_POWERON)
  __DECLARE_VAR(BOOL,I_STOPBTN)
  __DECLARE_VAR(BOOL,I_STOPRESBTN)
  __DECLARE_VAR(BOOL,I_EMSTOPBTN)
  __DECLARE_VAR(BOOL,I_EMSTOPRESBTN)
  __DECLARE_VAR(BOOL,I_MANUALSELECTOR)
  __DECLARE_VAR(BOOL,I_AUTOMATICSELECTOR)
  __DECLARE_VAR(SUPERSTATESENUM,SUPERSTATES)
  __DECLARE_VAR(BOOL,I_A0)
  __DECLARE_VAR(BOOL,I_A1)
  __DECLARE_VAR(BOOL,I_B0)
  __DECLARE_VAR(BOOL,I_B1)
  __DECLARE_VAR(BOOL,I_C0)
  __DECLARE_VAR(BOOL,I_C1)
  __DECLARE_VAR(BOOL,I_QT)
  __DECLARE_VAR(BOOL,Q_A)
  __DECLARE_VAR(BOOL,Q_B)
  __DECLARE_VAR(BOOL,Q_C)
  __DECLARE_VAR(BOOL,Q_POSITIONOK)
  __DECLARE_VAR(BOOL,Q_POSITIONNOTOK)
  __DECLARE_VAR(BOOL,Q_IT)
  __DECLARE_VAR(__ARRAY_OF_BYTE_8,INPUTARR)
  __DECLARE_VAR(INT,INPUTWORD)
  __DECLARE_VAR(__ARRAY_OF_INT_9,TRANS_MATX)
  __DECLARE_VAR(__ARRAY_OF_INT_9,OUTPT_MATX)
  __DECLARE_VAR(INT,ITECH)
  __DECLARE_VAR(INT,ITECHBIT)
  __DECLARE_VAR(BYTE,BYTECOMPARE)
  __DECLARE_VAR(__ARRAY_OF_BOOL_8,QS)
  __DECLARE_VAR(INT,TECHNOLOGICALSEQUENCESTATE)
  __DECLARE_VAR(INT,SUPERSEQUENCESTATE)
  TON TON_0;
  __DECLARE_VAR(TIME,BLASTINGTIME)

} SUPERSTAVY;

void SUPERSTAVY_init__(SUPERSTAVY *data__, BOOL retain);
// Code part
void SUPERSTAVY_body__(SUPERSTAVY *data__);
#endif //__POUS_H
