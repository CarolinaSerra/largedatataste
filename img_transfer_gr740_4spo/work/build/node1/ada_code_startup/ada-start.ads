pragma Ada_95;
pragma Warnings (Off);
with System;
package ada_main is

   procedure adainit;
   pragma Export (C, adainit, "adainit");

   procedure adafinal;
   pragma Export (C, adafinal, "adafinal");

   type Version_32 is mod 2 ** 32;
   u00001 : constant Version_32 := 16#cc9e0cb4#;
   pragma Export (C, u00001, "adainitS");
   u00002 : constant Version_32 := 16#b6df930e#;
   pragma Export (C, u00002, "system__standard_libraryB");
   u00003 : constant Version_32 := 16#1273916b#;
   pragma Export (C, u00003, "system__standard_libraryS");
   u00004 : constant Version_32 := 16#2a86eebc#;
   pragma Export (C, u00004, "systemS");
   u00005 : constant Version_32 := 16#a6359005#;
   pragma Export (C, u00005, "system__memoryB");
   u00006 : constant Version_32 := 16#73fb8888#;
   pragma Export (C, u00006, "system__memoryS");
   u00007 : constant Version_32 := 16#fad95a0e#;
   pragma Export (C, u00007, "ada__exceptionsB");
   u00008 : constant Version_32 := 16#022ba387#;
   pragma Export (C, u00008, "ada__exceptionsS");
   u00009 : constant Version_32 := 16#76789da1#;
   pragma Export (C, u00009, "adaS");
   u00010 : constant Version_32 := 16#e947e6a9#;
   pragma Export (C, u00010, "ada__exceptions__last_chance_handlerB");
   u00011 : constant Version_32 := 16#41e5552e#;
   pragma Export (C, u00011, "ada__exceptions__last_chance_handlerS");
   u00012 : constant Version_32 := 16#4e7785b8#;
   pragma Export (C, u00012, "system__soft_linksB");
   u00013 : constant Version_32 := 16#b40236e9#;
   pragma Export (C, u00013, "system__soft_linksS");
   u00014 : constant Version_32 := 16#58e02f1b#;
   pragma Export (C, u00014, "system__parametersB");
   u00015 : constant Version_32 := 16#54ace3c3#;
   pragma Export (C, u00015, "system__parametersS");
   u00016 : constant Version_32 := 16#5ab55268#;
   pragma Export (C, u00016, "interfacesS");
   u00017 : constant Version_32 := 16#769e25e6#;
   pragma Export (C, u00017, "interfaces__cB");
   u00018 : constant Version_32 := 16#70be4e8c#;
   pragma Export (C, u00018, "interfaces__cS");
   u00019 : constant Version_32 := 16#30ad09e5#;
   pragma Export (C, u00019, "system__secondary_stackB");
   u00020 : constant Version_32 := 16#901411c6#;
   pragma Export (C, u00020, "system__secondary_stackS");
   u00021 : constant Version_32 := 16#f103f468#;
   pragma Export (C, u00021, "system__storage_elementsB");
   u00022 : constant Version_32 := 16#0745a4b8#;
   pragma Export (C, u00022, "system__storage_elementsS");
   u00023 : constant Version_32 := 16#87a448ff#;
   pragma Export (C, u00023, "system__exception_tableB");
   u00024 : constant Version_32 := 16#772887fe#;
   pragma Export (C, u00024, "system__exception_tableS");
   u00025 : constant Version_32 := 16#41837d1e#;
   pragma Export (C, u00025, "system__stack_checkingB");
   u00026 : constant Version_32 := 16#a4398554#;
   pragma Export (C, u00026, "system__stack_checkingS");
   u00027 : constant Version_32 := 16#ce4af020#;
   pragma Export (C, u00027, "system__exceptionsB");
   u00028 : constant Version_32 := 16#42e5834a#;
   pragma Export (C, u00028, "system__exceptionsS");
   u00029 : constant Version_32 := 16#aa0563fc#;
   pragma Export (C, u00029, "system__exceptions_debugB");
   u00030 : constant Version_32 := 16#540c1778#;
   pragma Export (C, u00030, "system__exceptions_debugS");
   u00031 : constant Version_32 := 16#6c2f8802#;
   pragma Export (C, u00031, "system__img_intB");
   u00032 : constant Version_32 := 16#285d0e7e#;
   pragma Export (C, u00032, "system__img_intS");
   u00033 : constant Version_32 := 16#39df8c17#;
   pragma Export (C, u00033, "system__tracebackB");
   u00034 : constant Version_32 := 16#74a43078#;
   pragma Export (C, u00034, "system__tracebackS");
   u00035 : constant Version_32 := 16#9ed49525#;
   pragma Export (C, u00035, "system__traceback_entriesB");
   u00036 : constant Version_32 := 16#2add18cc#;
   pragma Export (C, u00036, "system__traceback_entriesS");
   u00037 : constant Version_32 := 16#6fd210f2#;
   pragma Export (C, u00037, "system__traceback__symbolicB");
   u00038 : constant Version_32 := 16#dd19f67a#;
   pragma Export (C, u00038, "system__traceback__symbolicS");
   u00039 : constant Version_32 := 16#701f9d88#;
   pragma Export (C, u00039, "ada__exceptions__tracebackB");
   u00040 : constant Version_32 := 16#20245e75#;
   pragma Export (C, u00040, "ada__exceptions__tracebackS");
   u00041 : constant Version_32 := 16#9f00b3d3#;
   pragma Export (C, u00041, "system__address_imageB");
   u00042 : constant Version_32 := 16#8b6a7386#;
   pragma Export (C, u00042, "system__address_imageS");
   u00043 : constant Version_32 := 16#8c33a517#;
   pragma Export (C, u00043, "system__wch_conB");
   u00044 : constant Version_32 := 16#31fbcc6e#;
   pragma Export (C, u00044, "system__wch_conS");
   u00045 : constant Version_32 := 16#9721e840#;
   pragma Export (C, u00045, "system__wch_stwB");
   u00046 : constant Version_32 := 16#1ceae06f#;
   pragma Export (C, u00046, "system__wch_stwS");
   u00047 : constant Version_32 := 16#a831679c#;
   pragma Export (C, u00047, "system__wch_cnvB");
   u00048 : constant Version_32 := 16#3e4c769d#;
   pragma Export (C, u00048, "system__wch_cnvS");
   u00049 : constant Version_32 := 16#ece6fdb6#;
   pragma Export (C, u00049, "system__wch_jisB");
   u00050 : constant Version_32 := 16#be3c6fbc#;
   pragma Export (C, u00050, "system__wch_jisS");
   u00051 : constant Version_32 := 16#5a1738b2#;
   pragma Export (C, u00051, "system__crtlS");
   --  BEGIN ELABORATION ORDER
   --  ada%s
   --  interfaces%s
   --  system%s
   --  system.img_int%s
   --  system.img_int%b
   --  system.storage_elements%s
   --  system.storage_elements%b
   --  system.stack_checking%s
   --  system.stack_checking%b
   --  system.traceback_entries%s
   --  system.traceback_entries%b
   --  system.wch_con%s
   --  system.wch_con%b
   --  system.wch_jis%s
   --  system.wch_jis%b
   --  system.wch_cnv%s
   --  system.wch_cnv%b
   --  system.traceback%s
   --  system.traceback%b
   --  system.parameters%s
   --  system.standard_library%s
   --  system.exceptions_debug%s
   --  system.exceptions_debug%b
   --  ada.exceptions%s
   --  system.wch_stw%s
   --  ada.exceptions.traceback%s
   --  system.crtl%s
   --  system.secondary_stack%s
   --  system.address_image%s
   --  system.soft_links%s
   --  system.exception_table%s
   --  system.exception_table%b
   --  system.exceptions%s
   --  system.exceptions%b
   --  ada.exceptions.last_chance_handler%s
   --  system.wch_stw%b
   --  ada.exceptions.traceback%b
   --  system.traceback.symbolic%s
   --  system.traceback.symbolic%b
   --  interfaces.c%s
   --  system.parameters%b
   --  system.memory%s
   --  system.memory%b
   --  system.secondary_stack%b
   --  system.address_image%b
   --  system.soft_links%b
   --  ada.exceptions.last_chance_handler%b
   --  system.standard_library%b
   --  ada.exceptions%b
   --  interfaces.c%b
   --  adainit%s
   --  END ELABORATION ORDER


end ada_main;
