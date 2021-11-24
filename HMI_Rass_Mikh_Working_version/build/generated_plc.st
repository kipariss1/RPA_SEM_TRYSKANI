PROGRAM test
  VAR
    IN_LED AT %IX0.0 : BOOL;
    Q_LED AT %QX1.3 : BOOL;
  END_VAR

  (* IF IN_LED THEN
    Q_LED := TRUE;
  ELSE
    Q_LED := FALSE;
  END_IF;
  *)

  Q_LED := IN_LED;
END_PROGRAM


CONFIGURATION Config0

  RESOURCE Res0 ON PLC
    TASK task0(INTERVAL := T#20ms,PRIORITY := 0);
    PROGRAM instance0 WITH task0 : test;
  END_RESOURCE
END_CONFIGURATION
