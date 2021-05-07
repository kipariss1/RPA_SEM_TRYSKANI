void LOGGER_init__(LOGGER *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->TRIG,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MSG,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->LEVEL,LOGLEVEL__INFO,retain)
  __INIT_VAR(data__->TRIG0,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void LOGGER_body__(LOGGER *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  if ((__GET_VAR(data__->TRIG,) && !(__GET_VAR(data__->TRIG0,)))) {
    #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
    #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)

   LogMessage(GetFbVar(LEVEL),(char*)GetFbVar(MSG, .body),GetFbVar(MSG, .len));
  
    #undef GetFbVar
    #undef SetFbVar
;
  };
  __SET_VAR(data__->,TRIG0,,__GET_VAR(data__->TRIG,));

  goto __end;

__end:
  return;
} // LOGGER_body__() 





void PYTHON_EVAL_init__(PYTHON_EVAL *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->TRIG,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CODE,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->ACK,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RESULT,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->STATE,0,retain)
  __INIT_VAR(data__->BUFFER,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->PREBUFFER,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->TRIGM1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TRIGGED,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void PYTHON_EVAL_body__(PYTHON_EVAL *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __IL_DEFVAR_T __IL_DEFVAR;
  __IL_DEFVAR_T __IL_DEFVAR_BACK;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
extern void __PythonEvalFB(int, PYTHON_EVAL*);__PythonEvalFB(0, data__);
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  return;
} // PYTHON_EVAL_body__() 





void PYTHON_POLL_init__(PYTHON_POLL *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->TRIG,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CODE,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->ACK,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RESULT,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->STATE,0,retain)
  __INIT_VAR(data__->BUFFER,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->PREBUFFER,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->TRIGM1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TRIGGED,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void PYTHON_POLL_body__(PYTHON_POLL *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __IL_DEFVAR_T __IL_DEFVAR;
  __IL_DEFVAR_T __IL_DEFVAR_BACK;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
extern void __PythonEvalFB(int, PYTHON_EVAL*);__PythonEvalFB(1,(PYTHON_EVAL*)(void*)data__);
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  return;
} // PYTHON_POLL_body__() 





void PYTHON_GEAR_init__(PYTHON_GEAR *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->N,0,retain)
  __INIT_VAR(data__->TRIG,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CODE,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->ACK,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RESULT,__STRING_LITERAL(0,""),retain)
  PYTHON_EVAL_init__(&data__->PY_EVAL,retain);
  __INIT_VAR(data__->COUNTER,0,retain)
  __INIT_VAR(data__->ADD10_OUT,0,retain)
  __INIT_VAR(data__->EQ13_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SEL15_OUT,0,retain)
  __INIT_VAR(data__->AND7_OUT,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void PYTHON_GEAR_body__(PYTHON_GEAR *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __SET_VAR(data__->,ADD10_OUT,,ADD__UINT__UINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)2,
    (UINT)__GET_VAR(data__->COUNTER,),
    (UINT)1));
  __SET_VAR(data__->,EQ13_OUT,,EQ__BOOL__UINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)2,
    (UINT)__GET_VAR(data__->N,),
    (UINT)__GET_VAR(data__->ADD10_OUT,)));
  __SET_VAR(data__->,SEL15_OUT,,SEL__UINT__BOOL__UINT__UINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (BOOL)__GET_VAR(data__->EQ13_OUT,),
    (UINT)__GET_VAR(data__->ADD10_OUT,),
    (UINT)0));
  __SET_VAR(data__->,COUNTER,,__GET_VAR(data__->SEL15_OUT,));
  __SET_VAR(data__->,AND7_OUT,,AND__BOOL__BOOL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)2,
    (BOOL)__GET_VAR(data__->EQ13_OUT,),
    (BOOL)__GET_VAR(data__->TRIG,)));
  __SET_VAR(data__->PY_EVAL.,TRIG,,__GET_VAR(data__->AND7_OUT,));
  __SET_VAR(data__->PY_EVAL.,CODE,,__GET_VAR(data__->CODE,));
  PYTHON_EVAL_body__(&data__->PY_EVAL);
  __SET_VAR(data__->,ACK,,__GET_VAR(data__->PY_EVAL.ACK,));
  __SET_VAR(data__->,RESULT,,__GET_VAR(data__->PY_EVAL.RESULT,));

  goto __end;

__end:
  return;
} // PYTHON_GEAR_body__() 





void SUPERSTAVY_init__(SUPERSTAVY *data__, BOOL retain) {
  __INIT_VAR(data__->I_START,1,retain)
  __INIT_VAR(data__->I_POWERON,1,retain)
  __INIT_VAR(data__->I_STOPBTN,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->I_STOPRESBTN,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->I_EMSTOPBTN,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->I_EMSTOPRESBTN,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->I_MANUALSELECTOR,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->I_AUTOMATICSELECTOR,1,retain)
  __INIT_VAR(data__->SUPERSTATES,SUPERSTATESENUM__ST_INICIALIZACE,retain)
  __INIT_VAR(data__->I_A0,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->I_A1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->I_B0,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->I_B1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->I_C0,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->I_C1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->I_QT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->Q_A,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->Q_B,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->Q_C,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->Q_POSITIONOK,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->Q_POSITIONNOTOK,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->Q_IT,__BOOL_LITERAL(FALSE),retain)
  {
    static const __ARRAY_OF_BYTE_8 temp = {{0,0,0,0,0,0,0,0}};
    __SET_VAR(data__->,INPUTARR,,temp);
  }
  __INIT_VAR(data__->INPUTWORD,0,retain)
  {
    static const __ARRAY_OF_INT_9 temp = {{0x25,0x26,0x2A,0x6A,0x26,0x16,0x1A,0x5A,0x16}};
    __SET_VAR(data__->,TRANS_MATX,,temp);
  }
  {
    static const __ARRAY_OF_INT_9 temp = {{0x05,0x07,0x0F,0x05,0x01,0x03,0x0B,0x01,0x04}};
    __SET_VAR(data__->,OUTPT_MATX,,temp);
  }
  __INIT_VAR(data__->ITECH,0,retain)
  __INIT_VAR(data__->ITECHBIT,0,retain)
  __INIT_VAR(data__->BYTECOMPARE,0x01,retain)
  {
    static const __ARRAY_OF_BOOL_8 temp = {{__BOOL_LITERAL(FALSE),__BOOL_LITERAL(FALSE),__BOOL_LITERAL(FALSE),__BOOL_LITERAL(FALSE),__BOOL_LITERAL(FALSE),__BOOL_LITERAL(FALSE),__BOOL_LITERAL(FALSE),__BOOL_LITERAL(FALSE)}};
    __SET_VAR(data__->,QS,,temp);
  }
  __INIT_VAR(data__->TECHNOLOGICALSEQUENCESTATE,0,retain)
  __INIT_VAR(data__->SUPERSEQUENCESTATE,1,retain)
  TON_init__(&data__->TON_0,retain);
  __INIT_VAR(data__->BLASTINGTIME,__time_to_timespec(1, 0, 5, 0, 0, 0),retain)
}

// Code part
void SUPERSTAVY_body__(SUPERSTAVY *data__) {
  // Initialise TEMP variables

  if ((__GET_VAR(data__->I_EMSTOPBTN,) == __BOOL_LITERAL(TRUE))) {
    __SET_VAR(data__->,SUPERSTATES,,SUPERSTATESENUM__ST_EMERGENCY_STOP);
  };
  {
    SUPERSTATESENUM __case_expression = __GET_VAR(data__->SUPERSTATES,);
    if ((__case_expression == SUPERSTATESENUM__ST_INICIALIZACE)) {
      __SET_VAR(data__->,SUPERSEQUENCESTATE,,1);
      __SET_VAR(data__->,SUPERSTATES,,SUPERSTATESENUM__ST_RESET_POSITION_OF_MOTORS);
    }
    else if ((__case_expression == SUPERSTATESENUM__ST_RESET_POSITION_OF_MOTORS)) {
      __SET_VAR(data__->,SUPERSEQUENCESTATE,,2);
      __SET_VAR(data__->,Q_A,,__BOOL_LITERAL(FALSE));
      __SET_VAR(data__->,Q_B,,__BOOL_LITERAL(FALSE));
      __SET_VAR(data__->,Q_C,,__BOOL_LITERAL(TRUE));
      if (((__GET_VAR(data__->I_A0,) && __GET_VAR(data__->I_B0,)) && __GET_VAR(data__->I_C1,))) {
        __SET_VAR(data__->,Q_POSITIONOK,,__BOOL_LITERAL(TRUE));
        __SET_VAR(data__->,Q_POSITIONNOTOK,,__BOOL_LITERAL(FALSE));
        __SET_VAR(data__->,SUPERSTATES,,SUPERSTATESENUM__ST_WAIT_FOR_COMMAND);
      };
    }
    else if ((__case_expression == SUPERSTATESENUM__ST_WAIT_FOR_COMMAND)) {
      __SET_VAR(data__->,SUPERSEQUENCESTATE,,3);
      __SET_VAR(data__->,Q_POSITIONOK,,__BOOL_LITERAL(FALSE));
      __SET_VAR(data__->,Q_POSITIONNOTOK,,__BOOL_LITERAL(FALSE));
      __SET_VAR(data__->,SUPERSTATES,,SUPERSTATESENUM__ST_MODE_SELECTION);
    }
    else if ((__case_expression == SUPERSTATESENUM__ST_MODE_SELECTION)) {
      __SET_VAR(data__->,SUPERSEQUENCESTATE,,4);
      __SET_VAR(data__->,SUPERSTATES,,SUPERSTATESENUM__ST_AUTOMATIC_MODE);
    }
    else if ((__case_expression == SUPERSTATESENUM__ST_MANUAL_MODE)) {
      __SET_VAR(data__->,SUPERSEQUENCESTATE,,5);
      __SET_VAR(data__->,I_A0,,1);
    }
    else if ((__case_expression == SUPERSTATESENUM__ST_AUTOMATIC_MODE)) {
      __SET_VAR(data__->,SUPERSEQUENCESTATE,,6);
      __SET_VAR(data__->,INPUTARR,.table[(0) - (0)],SHL__BYTE__BYTE__SINT(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (BYTE)BOOL_TO_BYTE(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (BOOL)__GET_VAR(data__->I_A0,)),
        (SINT)0));
      __SET_VAR(data__->,INPUTARR,.table[(1) - (0)],SHL__BYTE__BYTE__SINT(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (BYTE)BOOL_TO_BYTE(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (BOOL)__GET_VAR(data__->I_A1,)),
        (SINT)1));
      __SET_VAR(data__->,INPUTARR,.table[(2) - (0)],SHL__BYTE__BYTE__SINT(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (BYTE)BOOL_TO_BYTE(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (BOOL)__GET_VAR(data__->I_B0,)),
        (SINT)2));
      __SET_VAR(data__->,INPUTARR,.table[(3) - (0)],SHL__BYTE__BYTE__SINT(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (BYTE)BOOL_TO_BYTE(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (BOOL)__GET_VAR(data__->I_B1,)),
        (SINT)3));
      __SET_VAR(data__->,INPUTARR,.table[(4) - (0)],SHL__BYTE__BYTE__SINT(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (BYTE)BOOL_TO_BYTE(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (BOOL)__GET_VAR(data__->I_C0,)),
        (SINT)4));
      __SET_VAR(data__->,INPUTARR,.table[(5) - (0)],SHL__BYTE__BYTE__SINT(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (BYTE)BOOL_TO_BYTE(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (BOOL)__GET_VAR(data__->I_C1,)),
        (SINT)5));
      __SET_VAR(data__->,INPUTARR,.table[(6) - (0)],SHL__BYTE__BYTE__SINT(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (BYTE)BOOL_TO_BYTE(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (BOOL)__GET_VAR(data__->I_QT,)),
        (SINT)6));
      __SET_VAR(data__->,INPUTWORD,,((((((BYTE_TO_INT(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (BYTE)__GET_VAR(data__->INPUTARR,.table[(0) - (0)])) + BYTE_TO_INT(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (BYTE)__GET_VAR(data__->INPUTARR,.table[(1) - (0)]))) + BYTE_TO_INT(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (BYTE)__GET_VAR(data__->INPUTARR,.table[(2) - (0)]))) + BYTE_TO_INT(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (BYTE)__GET_VAR(data__->INPUTARR,.table[(3) - (0)]))) + BYTE_TO_INT(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (BYTE)__GET_VAR(data__->INPUTARR,.table[(4) - (0)]))) + BYTE_TO_INT(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (BYTE)__GET_VAR(data__->INPUTARR,.table[(5) - (0)]))) + BYTE_TO_INT(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (BYTE)__GET_VAR(data__->INPUTARR,.table[(6) - (0)]))));
      if ((__GET_VAR(data__->INPUTWORD,) == __GET_VAR(data__->TRANS_MATX,.table[(__GET_VAR(data__->ITECH,)) - (0)]))) {
        for(__GET_VAR(data__->ITECHBIT,) = 0; __GET_VAR(data__->ITECHBIT,) <= 7; __GET_VAR(data__->ITECHBIT,)++) {
          if (((INT_TO_BYTE(
            (BOOL)__BOOL_LITERAL(TRUE),
            NULL,
            (INT)__GET_VAR(data__->OUTPT_MATX,.table[(__GET_VAR(data__->ITECH,)) - (0)])) & SHL__BYTE__BYTE__INT(
            (BOOL)__BOOL_LITERAL(TRUE),
            NULL,
            (BYTE)__GET_VAR(data__->BYTECOMPARE,),
            (INT)__GET_VAR(data__->ITECHBIT,))) != 0)) {
            __SET_VAR(data__->,QS,.table[(__GET_VAR(data__->ITECHBIT,)) - (0)],__BOOL_LITERAL(TRUE));
          } else {
            __SET_VAR(data__->,QS,.table[(__GET_VAR(data__->ITECHBIT,)) - (0)],__BOOL_LITERAL(FALSE));
          };
        };
        __SET_VAR(data__->,Q_A,,__GET_VAR(data__->QS,.table[(0) - (0)]));
        __SET_VAR(data__->,Q_B,,__GET_VAR(data__->QS,.table[(1) - (0)]));
        __SET_VAR(data__->,Q_C,,__GET_VAR(data__->QS,.table[(2) - (0)]));
        __SET_VAR(data__->,Q_IT,,__GET_VAR(data__->QS,.table[(3) - (0)]));
        __SET_VAR(data__->,TECHNOLOGICALSEQUENCESTATE,,__GET_VAR(data__->ITECH,));
        __SET_VAR(data__->,ITECH,,(__GET_VAR(data__->ITECH,) + 1));
      };
      if ((__GET_VAR(data__->ITECH,) > 8)) {
        __SET_VAR(data__->,ITECH,,0);
      };
    }
    else if ((__case_expression == SUPERSTATESENUM__ST_CHECK_POSITION_OF_MOTORS)) {
      __SET_VAR(data__->,SUPERSEQUENCESTATE,,7);
      if ((((__GET_VAR(data__->I_A0,) == __BOOL_LITERAL(TRUE)) && (__GET_VAR(data__->I_B0,) == __BOOL_LITERAL(TRUE))) && (__GET_VAR(data__->I_C1,) == __BOOL_LITERAL(TRUE)))) {
        __SET_VAR(data__->,Q_POSITIONOK,,__BOOL_LITERAL(TRUE));
        __SET_VAR(data__->,SUPERSTATES,,SUPERSTATESENUM__ST_WAIT_FOR_COMMAND);
      } else {
        __SET_VAR(data__->,Q_POSITIONOK,,__BOOL_LITERAL(TRUE));
        __SET_VAR(data__->,SUPERSTATES,,SUPERSTATESENUM__ST_RESET_POSITION_OF_MOTORS);
      };
    }
    else if ((__case_expression == SUPERSTATESENUM__ST_STOP)) {
      __SET_VAR(data__->,SUPERSEQUENCESTATE,,8);
      if (__GET_VAR(data__->I_STOPRESBTN,)) {
        __SET_VAR(data__->,SUPERSTATES,,SUPERSTATESENUM__ST_AUTOMATIC_MODE);
      };
    }
    else if ((__case_expression == SUPERSTATESENUM__ST_EMERGENCY_STOP)) {
      __SET_VAR(data__->,SUPERSEQUENCESTATE,,0);
      __SET_VAR(data__->,I_POWERON,,__BOOL_LITERAL(FALSE));
      if (__GET_VAR(data__->I_EMSTOPRESBTN,)) {
        __SET_VAR(data__->,SUPERSTATES,,SUPERSTATESENUM__ST_WAIT_FOR_COMMAND);
      };
    }
  };
  __SET_VAR(data__->TON_0.,IN,,__GET_VAR(data__->I_B1,));
  __SET_VAR(data__->TON_0.,PT,,__GET_VAR(data__->BLASTINGTIME,));
  TON_body__(&data__->TON_0);
  __SET_VAR(data__->,I_QT,,__GET_VAR(data__->TON_0.Q));

  goto __end;

__end:
  return;
} // SUPERSTAVY_body__() 





