#pragma once

#include "quantum.h"

//ergo
//corne
//alice
//ergolite
#define LAYOUT( \
  ergo00, ergo01, ergo02, ergo03, ergo04, ergo05, ergo06, ergo07,                          ergo08, ergo09, ergo10, ergo11, ergo12, ergo13, ergo14, ergo15, \
  ergo16, ergo17, ergo18, ergo19, ergo20, ergo21, ergo22, ergo23,                          ergo24, ergo25, ergo26, ergo27, ergo28, ergo29, ergo30, ergo31, \
  ergo32, ergo33, ergo34, ergo35, ergo36, ergo37, ergo38, ergo39,                          ergo40, ergo41, ergo42, ergo43, ergo44, ergo45, ergo46, ergo47, \
  ergo48, ergo49, ergo50, ergo51, ergo52, ergo53, ergo54, ergo55,                          ergo56, ergo57, ergo58, ergo59, ergo60, ergo61, ergo62, ergo63, \
  ergo64, ergo65, ergo66, ergo67, ergo68, ergo69,                                                          ergo70, ergo71, ergo72, ergo73, ergo74, ergo75, \
  corne00, corne01, corne02, corne03, corne04, corne05,                                     corne06, corne07, corne08, corne09, corne10, corne11,\
  corne12, corne13, corne14, corne15, corne16, corne17,                                     corne18, corne19, corne20, corne21, corne22, corne23,\
  corne24, corne25, corne26, corne27, corne28, corne29,                                     corne30, corne31, corne32, corne33, corne34, corne35,\
  corne36, corne37, corne38,                                                                corne39, corne40, corne41,\
  alice01, alice02, alice03, alice04, alice05, alice06, alice07, alice08,                  alice09, alice10, alice11, alice12, alice13, alice14, alice15, \
  alice16, alice17, alice18, alice19, alice20, alice21, alice22,                           alice23, alice24, alice25, alice26, alice27, alice28, alice29, alice30, \
  alice31, alice32, alice33, alice34, alice35, alice36, alice37,                           alice38, alice39, alice40, alice41, alice42, alice43, alice44, \
  alice45, alice46, alice47, alice48, alice49, alice50, alice51,                           alice52, alice53, alice54, alice55, alice56, alice57, alice58, alice59, \
  alice60, alice61, alice62, alice63,                                                      alice64, alice65, alice66, alice67, alice68, alice69,\
  eglt00, eglt01, eglt02, eglt03, eglt04, eglt05, eglt06,                                  eglt07, eglt08, eglt09, eglt10, eglt11, eglt12, eglt13,\
  eglt14, eglt15, eglt16, eglt17, eglt18, eglt19, eglt20,                                  eglt21, eglt22, eglt23, eglt24, eglt25, eglt26, eglt27,\
  eglt28, eglt29, eglt30, eglt31, eglt32, eglt33, eglt34,                                  eglt35, eglt36, eglt37, eglt38, eglt39, eglt40, eglt41,\
  eglt42, eglt43, eglt44, eglt45, eglt46, eglt47, eglt48,                                  eglt49, eglt50, eglt51, eglt52, eglt53, eglt54, eglt55,\
  eglt56, eglt57, eglt58, eglt59, eglt60,                                                  eglt61, eglt62, eglt63, eglt64, eglt65\
) { \
	{ ergo00, ergo01, ergo02, ergo03, ergo04, ergo05, ergo06, ergo07, ergo08, ergo09, ergo10, ergo11, ergo12, ergo13, ergo14, ergo15}, \
	{ ergo16, ergo17, ergo18, ergo19, ergo20, ergo21, ergo22, ergo23, ergo24, ergo25, ergo26, ergo27, ergo28, ergo29, ergo30, ergo31}, \
	{ ergo32, ergo33, ergo34, ergo35, ergo36, ergo37, ergo38, ergo39, ergo40, ergo41, ergo42, ergo43, ergo44, ergo45, ergo46, ergo47}, \
	{ ergo48, ergo49, ergo50, ergo51, ergo52, ergo53, ergo54, ergo55, ergo56, ergo57, ergo58, ergo59, ergo60, ergo61, ergo62, ergo63}, \
	{ ergo64, ergo65, ergo66, ergo67, ergo68, ergo69, KC_NO,  KC_NO,  KC_NO,  KC_NO,  ergo70, ergo71, ergo72, ergo73, ergo74, ergo75}, \
    { corne00, corne01, corne02, corne03, corne04, corne05, KC_NO, KC_NO, KC_NO, KC_NO, corne06, corne07, corne08, corne09, corne10, corne11}, \
    { corne12, corne13, corne14, corne15, corne16, corne17, KC_NO, KC_NO, KC_NO, KC_NO, corne18, corne19, corne20, corne21, corne22, corne23}, \
    { corne24, corne25, corne26, corne27, corne28, corne29, KC_NO, KC_NO, KC_NO, KC_NO, corne30, corne31, corne32, corne33, corne34, corne35}, \
    { KC_NO,   KC_NO,   KC_NO,   corne36, corne37, corne38, KC_NO, KC_NO, KC_NO, KC_NO, corne39, corne40, corne41, KC_NO,   KC_NO,   KC_NO}, \
    { KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO}, \
    {alice01, alice02, alice03, alice04, alice05, alice06, alice07, alice08, alice09, alice10, alice11, alice12, alice13, alice14, alice15, KC_NO},\
    {alice16, alice17, alice18, alice19, alice20, alice21, alice22, KC_NO,   alice23, alice24, alice25, alice26, alice27, alice28, alice29, alice30},\
    {alice31, alice32, alice33, alice34, alice35, alice36, alice37, KC_NO,   alice38, alice39, alice40, alice41, alice42, alice43, alice44, KC_NO},\
    {alice45, alice46, alice47, alice48, alice49, alice50, alice51, KC_NO,   alice52, alice53, alice54, alice55, alice56, alice57, alice58, alice59},\
    {alice60, alice61, alice62, alice63, KC_NO,   KC_NO,   KC_NO,   KC_NO,   alice64, alice65, alice66, alice67, alice68, alice69, KC_NO,   KC_NO},\
    {eglt00, eglt01, eglt02, eglt03, eglt04, eglt05, eglt06, KC_NO, KC_NO, eglt07, eglt08, eglt09, eglt10, eglt11, eglt12, eglt13},\
    {eglt14, eglt15, eglt16, eglt17, eglt18, eglt19, eglt20, KC_NO, KC_NO, eglt21, eglt22, eglt23, eglt24, eglt25, eglt26, eglt27},\
    {eglt28, eglt29, eglt30, eglt31, eglt32, eglt33, eglt34, KC_NO, KC_NO, eglt35, eglt36, eglt37, eglt38, eglt39, eglt40, eglt41},\
    {eglt42, eglt43, eglt44, eglt45, eglt46, eglt47, eglt48, KC_NO, KC_NO, eglt49, eglt50, eglt51, eglt52, eglt53, eglt54, eglt55},\
    {KC_NO,  KC_NO,  eglt56, eglt57, eglt58, eglt59, eglt60, KC_NO, KC_NO, eglt61, eglt62, eglt63, eglt64, eglt65, KC_NO,  KC_NO},\
}
