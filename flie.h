// Project FLIE-Fuzzy Logic Inference Engine - Joao Alberto Fabro - out/1996
// Header file flie.h
#include <iostream>
using namespace std;
#include <stdio.h>
#include "fuzzyset.h"
#include "lingvar.h"
#include "rule.h"
#include "fuzzy_control.h"
#include "stdlib.h"
#include "string.h"

#define tnorm(x,y) x<y?x:y //min : macros that define the T-norm
#define snorm(x,y) x<y?y:x //max : and the S-norm used in the fuzzy inference



