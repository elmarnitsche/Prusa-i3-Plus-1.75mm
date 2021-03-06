/**
 * German
 * Translation by Elmar Nische
 * LCD Menu Messages
 * Please note these are limited to 17 characters!
 *
 */
#ifndef LANGUAGE_DE_H
#define LANGUAGE_DE_H

#define WELCOME_MSG                         MACHINE_NAME " bereit!"
#define MSG_SD_INSERTED                     "SD Karte bereit!"
#define MSG_SD_REMOVED                      "Keine SD Karte!"
#define MSG_MAIN                            "Haupt"
#define MSG_AUTOSTART                       "Autostart"
#define MSG_DISABLE_STEPPERS                "Achsen AUS"
#define MSG_AUTO_HOME                       "Auto-Nullpunkt"
#define MSG_WORK_HOME                       "Arbeitsposition"
#define MSG_SET_HOME_OFFSETS                "Set home offsets"
#define MSG_SET_ORIGIN                      "Ursprung"
#define MSG_PREHEAT_PLA                     "vorheizen PLA"
#define MSG_PREHEAT_PLA0                    "Preheat PLA 1"
#define MSG_PREHEAT_PLA1                    "Preheat PLA 2"
#define MSG_PREHEAT_PLA2                    "Preheat PLA 3"
#define MSG_PREHEAT_PLA012                  "Preheat PLA All"
#define MSG_PREHEAT_PLA_BEDONLY             "Preheat PLA Bed"
#define MSG_PREHEAT_PLA_SETTINGS            "Preheat PLA conf"
#define MSG_PREHEAT_ABS                     "vorheizen ABS"
#define MSG_PREHEAT_ABS0                    "Preheat ABS 1"
#define MSG_PREHEAT_ABS1                    "Preheat ABS 2"
#define MSG_PREHEAT_ABS2                    "Preheat ABS 3"
#define MSG_PREHEAT_ABS012                  "Preheat ABS All"
#define MSG_PREHEAT_ABS_BEDONLY             "Preheat ABS Bed"
#define MSG_PREHEAT_ABS_SETTINGS            "Preheat ABS conf"
#define MSG_COOLDOWN                        "Heizung AUS"
#define MSG_SWITCH_PS_ON                    "AN"
#define MSG_SWITCH_PS_OFF                   "AUS"
#define MSG_EXTRUDE                         "extrudieren"
#define MSG_RETRACT                         "Einzug"
#define MSG_MOVE_AXIS                       "Achsen fahren"
#define MSG_MOVE_X                          "X-Achse"
#define MSG_MOVE_Y                          "Y-Achse"
#define MSG_MOVE_Z                          "Z-Achse"
#define MSG_MOVE_E                          "Extruder"
#define MSG_MOVE_E1                         "Extruder2"
#define MSG_MOVE_E2                         "Extruder3"
#define MSG_MOVE_01MM                       "0.1mm -> 1mm"
#define MSG_MOVE_1MM                        "1mm -> 0.1mm"
#define MSG_MOVE_10MM                       "10  mm"
#define MSG_SPEED                           "Geschwindigkeit"
#define MSG_NOZZLE                          "Nase"
#define MSG_NOZZLE1                         "Nozzle2"
#define MSG_NOZZLE2                         "Nozzle3"
#define MSG_BED                             "Bett"
#define MSG_FAN_SPEED                       "Ventilator"
#define MSG_FLOW                            "Fluss"
#define MSG_FLOW0                           "Fluss 0"
#define MSG_FLOW1                           "Flow 1"
#define MSG_FLOW2                           "Flow 2"
#define MSG_CONTROL                         "Kontrolle"
#define MSG_MIN                             " \002 Min"
#define MSG_MAX                             " \002 Max"
#define MSG_FACTOR                          " \002 Fact"
#define MSG_AUTOTEMP                        "Autotemp"
#define MSG_ON                              "AN "
#define MSG_OFF                             "AUS"
#define MSG_PID_P                           "PID-P"
#define MSG_PID_I                           "PID-I"
#define MSG_PID_D                           "PID-D"
#define MSG_PID_C                           "PID-C"
#define MSG_ACC                             "Beschleunigung"
#define MSG_VXY_JERK                        "Vxy-jerk"
#define MSG_VZ_JERK                         "Vz-jerk"
#define MSG_VE_JERK                         "Ve-jerk"
#define MSG_VMAX                            "Vmax "
#define MSG_X                               "x"
#define MSG_Y                               "y"
#define MSG_Z                               "z"
#define MSG_E                               "e"
#define MSG_VMIN                            "Vmin"
#define MSG_VTRAV_MIN                       "VTrav min"
#define MSG_AMAX                            "Amax "
#define MSG_A_RETRACT                       "A-retract"
#define MSG_XSTEPS                          "Xsteps/mm"
#define MSG_YSTEPS                          "Ysteps/mm"
#define MSG_ZSTEPS                          "Zsteps/mm"
#define MSG_ESTEPS                          "Esteps/mm"
#define MSG_TEMPERATURE                     "Temperatur"
#define MSG_MOTION                          "Bewegung"
#define MSG_VOLUMETRIC                      "Filament"
#define MSG_VOLUMETRIC_ENABLED		        "E in mm3"
#define MSG_FILAMENT_SIZE_EXTRUDER_0        "Fil. Dia. 1"
#define MSG_FILAMENT_SIZE_EXTRUDER_1        "Fil. Dia. 2"
#define MSG_FILAMENT_SIZE_EXTRUDER_2        "Fil. Dia. 3"
#define MSG_CONTRAST                        "LCD contrast"
#define MSG_STORE_EPROM                     "Store memory"
#define MSG_LOAD_EPROM                      "Load memory"
#define MSG_RESTORE_FAILSAFE                "Restore failsafe"
#define MSG_REFRESH                         "Refresh"
#define MSG_WATCH                           "Info"
#define MSG_PREPARE                         "Vorbereitung"
#define MSG_TUNE                            "Feineinstellung"
#define MSG_PAUSE_PRINT                     "Pause"
#define MSG_RESUME_PRINT                    "Weiter"
#define MSG_STOP_PRINT                      "Abbrechen"
#define MSG_CARD_MENU                       "SD Karte"
#define MSG_NO_CARD                         "Keine SD Karte!"
#define MSG_DWELL                           "schlafen..."
#define MSG_USERWAIT                        "warte auf Eingabe...."
#define MSG_RESUMING                        "Drucke weiter..."
#define MSG_PRINT_ABORTED                   "Druck abgebrochen!"
#define MSG_NO_MOVE                         "Keine Bewegung"
#define MSG_KILLED                          "KILLED. "
#define MSG_STOPPED                         "STOPPED. "
#define MSG_CONTROL_RETRACT                 "Retract mm"
#define MSG_CONTROL_RETRACT_SWAP            "Swap Re.mm"
#define MSG_CONTROL_RETRACTF                "Retract  V"
#define MSG_CONTROL_RETRACT_ZLIFT           "Hop mm"
#define MSG_CONTROL_RETRACT_RECOVER         "UnRet +mm"
#define MSG_CONTROL_RETRACT_RECOVER_SWAP    "S UnRet+mm"
#define MSG_CONTROL_RETRACT_RECOVERF        "UnRet  V"
#define MSG_AUTORETRACT                     "AutoRetr."
#define MSG_FILAMENTCHANGE                  "Filamentwechsel"
#define MSG_INIT_SDCARD                     "Init. SD card"
#define MSG_CNG_SDCARD                      "Change SD card"
#define MSG_ZPROBE_OUT                      "Z probe out. bed"
#define MSG_POSITION_UNKNOWN                "Kal. XY vor Z"
#define MSG_ZPROBE_ZOFFSET                  "Z Offset"
#define MSG_BABYSTEP_X                      "Babystep X"
#define MSG_BABYSTEP_Y                      "Babystep Y"
#define MSG_BABYSTEP_Z                      "Babystep Z"
#define MSG_ENDSTOP_ABORT                   "Endstop abort"

#define MSG_HOMEYZ                          "Z Kalibrieren"
#define MSG_HOME_1_Z                        "1. X:25  Y:5"
#define MSG_HOME_2_Z                        "2. X:170 Y:5"
#define MSG_HOME_3_Z                        "3. X:170 Y:170" 
#define MSG_HOME_4_Z                        "4. X:25  Y:170"
#define MSG_HOME_5_Z                        "5. Mitte"
#define MSG_SETTINGS                         "Einstellungen"
#define MSG_PREHEAT                         "Vorheizen"
#define MSG_UNLOAD_FILAMENT                 "Filam. auswerfen"
#define MSG_LOAD_FILAMENT                   "Filam. laden"

#define MSG_RECTRACT                         "Rectract"
#define MSG_ERROR                            "FEHLER:"
#define MSG_PREHEAT_NOZZLE                   "Nase heizen.."
#define MSG_SUPPORT                          "Support"
#define MSG_CORRECTLY			                   "Wechsel erfolgt?"
#define MSG_YES					                     "JA"
#define MSG_NOT_LOADED 			                 "NEIN!"
#define MSG_NOT_COLOR 			                 "falsche Farbe!"
#define MSG_LOADING_FILAMENT	               "lade Filament!"
#define MSG_PLEASE_WAIT			                 "Bitte warten..."
#define MSG_LOADING_COLOR		                 "Lade Farbe!"
#define MSG_CHANGE_SUCCESS		               "Wechsel erfolgreich!"
#define MSG_PRESS				                     "und Knopf druecken!"
#define MSG_INSERT_FILAMENT		               "Filament einsetzen"
#define MSG_CHANGING_FILAMENT	                "Filament wechseln!"
//#define MSG_HEATING_COMPLETE                  "Drucken..."
//#define MSG_BED_HEATING                       "Vorheizen..."
#define MSG_CALIBRATION                       "Kalibrieren"


#ifdef DELTA_CALIBRATION_MENU
    #define MSG_DELTA_CALIBRATE             "Delta Calibration"
    #define MSG_DELTA_CALIBRATE_X           "Calibrate X"
    #define MSG_DELTA_CALIBRATE_Y           "Calibrate Y"
    #define MSG_DELTA_CALIBRATE_Z           "Calibrate Z"
    #define MSG_DELTA_CALIBRATE_CENTER      "Calibrate Center"
#endif // DELTA_CALIBRATION_MENU


#endif // LANGUAGE_DE_H
