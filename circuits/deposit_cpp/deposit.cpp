#include <stdio.h>
#include <iostream>
#include <assert.h>
#include "circom.hpp"
#include "calcwit.hpp"
void Edwards2Montgomery_0_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void Edwards2Montgomery_0_run(uint ctx_index,Circom_CalcWit* ctx);
void MultiMux3_1_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void MultiMux3_1_run(uint ctx_index,Circom_CalcWit* ctx);
void MontgomeryDouble_2_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void MontgomeryDouble_2_run(uint ctx_index,Circom_CalcWit* ctx);
void MontgomeryAdd_3_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void MontgomeryAdd_3_run(uint ctx_index,Circom_CalcWit* ctx);
void Window4_4_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void Window4_4_run(uint ctx_index,Circom_CalcWit* ctx);
void Montgomery2Edwards_5_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void Montgomery2Edwards_5_run(uint ctx_index,Circom_CalcWit* ctx);
void Segment_6_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void Segment_6_run(uint ctx_index,Circom_CalcWit* ctx);
void Segment_7_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void Segment_7_run(uint ctx_index,Circom_CalcWit* ctx);
void BabyAdd_8_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void BabyAdd_8_run(uint ctx_index,Circom_CalcWit* ctx);
void Pedersen_9_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void Pedersen_9_run(uint ctx_index,Circom_CalcWit* ctx);
void Segment_10_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void Segment_10_run(uint ctx_index,Circom_CalcWit* ctx);
void Pedersen_11_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void Pedersen_11_run(uint ctx_index,Circom_CalcWit* ctx);
void CommitmentHasher_12_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void CommitmentHasher_12_run(uint ctx_index,Circom_CalcWit* ctx);
Circom_TemplateFunction _functionTable[13] = { 
Edwards2Montgomery_0_run,
MultiMux3_1_run,
MontgomeryDouble_2_run,
MontgomeryAdd_3_run,
Window4_4_run,
Montgomery2Edwards_5_run,
Segment_6_run,
Segment_7_run,
BabyAdd_8_run,
Pedersen_9_run,
Segment_10_run,
Pedersen_11_run,
CommitmentHasher_12_run };
uint get_main_input_signal_start() {return 3;}

uint get_main_input_signal_no() {return 512;}

uint get_total_signal_no() {return 24130;}

uint get_number_of_components() {return 2310;}

uint get_size_of_input_hashmap() {return 256;}

uint get_size_of_witness() {return 1870;}

uint get_size_of_constants() {return 46;}

uint get_size_of_io_map() {return 3;}

// function declarations
// template declarations
void Edwards2Montgomery_0_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 0;
ctx->componentMemory[coffset].templateName = "Edwards2Montgomery";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 2;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
}

void Edwards2Montgomery_0_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[6];
FrElement lvar[0];
uint sub_component_aux;
{
PFrElement aux_dest = &signalValues[mySignalStart + 0];
// load src
Fr_add(&expaux[1],&circuitConstants[1],&signalValues[mySignalStart + 3]); // line circom 34
Fr_sub(&expaux[2],&circuitConstants[1],&signalValues[mySignalStart + 3]); // line circom 34
Fr_div(&expaux[0],&expaux[1],&expaux[2]); // line circom 34
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 1];
// load src
Fr_div(&expaux[0],&signalValues[mySignalStart + 0],&signalValues[mySignalStart + 2]); // line circom 35
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_sub(&expaux[3],&circuitConstants[1],&signalValues[mySignalStart + 3]); // line circom 38
Fr_mul(&expaux[1],&signalValues[mySignalStart + 0],&expaux[3]); // line circom 38
Fr_add(&expaux[2],&circuitConstants[1],&signalValues[mySignalStart + 3]); // line circom 38
Fr_eq(&expaux[0],&expaux[1],&expaux[2]); // line circom 38
if (!Fr_isTrue(&expaux[0])) std::cout << "Failed assert in template/function " << myTemplateName << " line 38. " <<  "Followed trace of components: " << ctx->getTrace(myId) << std::endl;
assert(Fr_isTrue(&expaux[0]));
Fr_mul(&expaux[1],&signalValues[mySignalStart + 1],&signalValues[mySignalStart + 2]); // line circom 39
Fr_eq(&expaux[0],&expaux[1],&signalValues[mySignalStart + 0]); // line circom 39
if (!Fr_isTrue(&expaux[0])) std::cout << "Failed assert in template/function " << myTemplateName << " line 39. " <<  "Followed trace of components: " << ctx->getTrace(myId) << std::endl;
assert(Fr_isTrue(&expaux[0]));
}

void MultiMux3_1_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 1;
ctx->componentMemory[coffset].templateName = "MultiMux3";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 19;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
}

void MultiMux3_1_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[10];
FrElement lvar[2];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[2]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 37];
// load src
Fr_mul(&expaux[0],&signalValues[mySignalStart + 19],&signalValues[mySignalStart + 18]); // line circom 38
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[1],&circuitConstants[2]); // line circom 40
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[1])) + 21)];
// load src
Fr_sub(&expaux[7],&signalValues[mySignalStart + (((8 * Fr_toInt(&lvar[1])) + 7) + 2)],&signalValues[mySignalStart + (((8 * Fr_toInt(&lvar[1])) + 6) + 2)]); // line circom 42
Fr_sub(&expaux[6],&expaux[7],&signalValues[mySignalStart + (((8 * Fr_toInt(&lvar[1])) + 5) + 2)]); // line circom 42
Fr_add(&expaux[5],&expaux[6],&signalValues[mySignalStart + (((8 * Fr_toInt(&lvar[1])) + 4) + 2)]); // line circom 42
Fr_sub(&expaux[4],&expaux[5],&signalValues[mySignalStart + (((8 * Fr_toInt(&lvar[1])) + 3) + 2)]); // line circom 42
Fr_add(&expaux[3],&expaux[4],&signalValues[mySignalStart + (((8 * Fr_toInt(&lvar[1])) + 2) + 2)]); // line circom 42
Fr_add(&expaux[2],&expaux[3],&signalValues[mySignalStart + (((8 * Fr_toInt(&lvar[1])) + 1) + 2)]); // line circom 42
Fr_sub(&expaux[1],&expaux[2],&signalValues[mySignalStart + (((8 * Fr_toInt(&lvar[1])) + 0) + 2)]); // line circom 42
Fr_mul(&expaux[0],&expaux[1],&signalValues[mySignalStart + 37]); // line circom 42
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[1])) + 23)];
// load src
Fr_sub(&expaux[3],&signalValues[mySignalStart + (((8 * Fr_toInt(&lvar[1])) + 6) + 2)],&signalValues[mySignalStart + (((8 * Fr_toInt(&lvar[1])) + 4) + 2)]); // line circom 43
Fr_sub(&expaux[2],&expaux[3],&signalValues[mySignalStart + (((8 * Fr_toInt(&lvar[1])) + 2) + 2)]); // line circom 43
Fr_add(&expaux[1],&expaux[2],&signalValues[mySignalStart + (((8 * Fr_toInt(&lvar[1])) + 0) + 2)]); // line circom 43
Fr_mul(&expaux[0],&expaux[1],&signalValues[mySignalStart + 19]); // line circom 43
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[1])) + 25)];
// load src
Fr_sub(&expaux[3],&signalValues[mySignalStart + (((8 * Fr_toInt(&lvar[1])) + 5) + 2)],&signalValues[mySignalStart + (((8 * Fr_toInt(&lvar[1])) + 4) + 2)]); // line circom 44
Fr_sub(&expaux[2],&expaux[3],&signalValues[mySignalStart + (((8 * Fr_toInt(&lvar[1])) + 1) + 2)]); // line circom 44
Fr_add(&expaux[1],&expaux[2],&signalValues[mySignalStart + (((8 * Fr_toInt(&lvar[1])) + 0) + 2)]); // line circom 44
Fr_mul(&expaux[0],&expaux[1],&signalValues[mySignalStart + 18]); // line circom 44
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[1])) + 27)];
// load src
Fr_sub(&expaux[0],&signalValues[mySignalStart + (((8 * Fr_toInt(&lvar[1])) + 4) + 2)],&signalValues[mySignalStart + (((8 * Fr_toInt(&lvar[1])) + 0) + 2)]); // line circom 45
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[1])) + 29)];
// load src
Fr_sub(&expaux[3],&signalValues[mySignalStart + (((8 * Fr_toInt(&lvar[1])) + 3) + 2)],&signalValues[mySignalStart + (((8 * Fr_toInt(&lvar[1])) + 2) + 2)]); // line circom 47
Fr_sub(&expaux[2],&expaux[3],&signalValues[mySignalStart + (((8 * Fr_toInt(&lvar[1])) + 1) + 2)]); // line circom 47
Fr_add(&expaux[1],&expaux[2],&signalValues[mySignalStart + (((8 * Fr_toInt(&lvar[1])) + 0) + 2)]); // line circom 47
Fr_mul(&expaux[0],&expaux[1],&signalValues[mySignalStart + 37]); // line circom 47
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[1])) + 31)];
// load src
Fr_sub(&expaux[1],&signalValues[mySignalStart + (((8 * Fr_toInt(&lvar[1])) + 2) + 2)],&signalValues[mySignalStart + (((8 * Fr_toInt(&lvar[1])) + 0) + 2)]); // line circom 48
Fr_mul(&expaux[0],&expaux[1],&signalValues[mySignalStart + 19]); // line circom 48
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[1])) + 33)];
// load src
Fr_sub(&expaux[1],&signalValues[mySignalStart + (((8 * Fr_toInt(&lvar[1])) + 1) + 2)],&signalValues[mySignalStart + (((8 * Fr_toInt(&lvar[1])) + 0) + 2)]); // line circom 49
Fr_mul(&expaux[0],&expaux[1],&signalValues[mySignalStart + 18]); // line circom 49
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[1])) + 35)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + (((8 * Fr_toInt(&lvar[1])) + 0) + 2)]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[1])) + 0)];
// load src
Fr_add(&expaux[4],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[1])) + 21)],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[1])) + 23)]); // line circom 52
Fr_add(&expaux[3],&expaux[4],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[1])) + 25)]); // line circom 52
Fr_add(&expaux[2],&expaux[3],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[1])) + 27)]); // line circom 52
Fr_mul(&expaux[1],&expaux[2],&signalValues[mySignalStart + 20]); // line circom 52
Fr_add(&expaux[4],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[1])) + 29)],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[1])) + 31)]); // line circom 53
Fr_add(&expaux[3],&expaux[4],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[1])) + 33)]); // line circom 53
Fr_add(&expaux[2],&expaux[3],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[1])) + 35)]); // line circom 53
Fr_add(&expaux[0],&expaux[1],&expaux[2]); // line circom 52
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
Fr_add(&expaux[0],&lvar[1],&circuitConstants[1]); // line circom 40
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[1],&circuitConstants[2]); // line circom 40
}
}

void MontgomeryDouble_2_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 2;
ctx->componentMemory[coffset].templateName = "MontgomeryDouble";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 2;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
}

void MontgomeryDouble_2_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[8];
FrElement lvar[4];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[8]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[9]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[10]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[1]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 5];
// load src
Fr_mul(&expaux[0],&signalValues[mySignalStart + 2],&signalValues[mySignalStart + 2]); // line circom 135
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 4];
// load src
Fr_mul(&expaux[3],&circuitConstants[7],&signalValues[mySignalStart + 5]); // line circom 137
Fr_mul(&expaux[4],&circuitConstants[11],&signalValues[mySignalStart + 2]); // line circom 137
Fr_add(&expaux[2],&expaux[3],&expaux[4]); // line circom 137
Fr_add(&expaux[1],&expaux[2],&circuitConstants[1]); // line circom 137
Fr_mul(&expaux[2],&circuitConstants[2],&signalValues[mySignalStart + 3]); // line circom 137
Fr_div(&expaux[0],&expaux[1],&expaux[2]); // line circom 137
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_mul(&expaux[3],&circuitConstants[2],&signalValues[mySignalStart + 3]); // line circom 138
Fr_mul(&expaux[1],&signalValues[mySignalStart + 4],&expaux[3]); // line circom 138
Fr_mul(&expaux[4],&circuitConstants[7],&signalValues[mySignalStart + 5]); // line circom 138
Fr_mul(&expaux[5],&circuitConstants[11],&signalValues[mySignalStart + 2]); // line circom 138
Fr_add(&expaux[3],&expaux[4],&expaux[5]); // line circom 138
Fr_add(&expaux[2],&expaux[3],&circuitConstants[1]); // line circom 138
Fr_eq(&expaux[0],&expaux[1],&expaux[2]); // line circom 138
if (!Fr_isTrue(&expaux[0])) std::cout << "Failed assert in template/function " << myTemplateName << " line 138. " <<  "Followed trace of components: " << ctx->getTrace(myId) << std::endl;
assert(Fr_isTrue(&expaux[0]));
{
PFrElement aux_dest = &signalValues[mySignalStart + 0];
// load src
Fr_mul(&expaux[3],&circuitConstants[1],&signalValues[mySignalStart + 4]); // line circom 140
Fr_mul(&expaux[2],&expaux[3],&signalValues[mySignalStart + 4]); // line circom 140
Fr_sub(&expaux[1],&expaux[2],&circuitConstants[10]); // line circom 140
Fr_mul(&expaux[2],&circuitConstants[2],&signalValues[mySignalStart + 2]); // line circom 140
Fr_sub(&expaux[0],&expaux[1],&expaux[2]); // line circom 140
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 1];
// load src
Fr_sub(&expaux[3],&signalValues[mySignalStart + 2],&signalValues[mySignalStart + 0]); // line circom 141
Fr_mul(&expaux[1],&signalValues[mySignalStart + 4],&expaux[3]); // line circom 141
Fr_sub(&expaux[0],&expaux[1],&signalValues[mySignalStart + 3]); // line circom 141
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
}

void MontgomeryAdd_3_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 3;
ctx->componentMemory[coffset].templateName = "MontgomeryAdd";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 4;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
}

void MontgomeryAdd_3_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[7];
FrElement lvar[4];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[8]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[9]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[10]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[1]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 6];
// load src
Fr_sub(&expaux[1],&signalValues[mySignalStart + 5],&signalValues[mySignalStart + 3]); // line circom 102
Fr_sub(&expaux[2],&signalValues[mySignalStart + 4],&signalValues[mySignalStart + 2]); // line circom 102
Fr_div(&expaux[0],&expaux[1],&expaux[2]); // line circom 102
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_sub(&expaux[3],&signalValues[mySignalStart + 4],&signalValues[mySignalStart + 2]); // line circom 103
Fr_mul(&expaux[1],&signalValues[mySignalStart + 6],&expaux[3]); // line circom 103
Fr_sub(&expaux[2],&signalValues[mySignalStart + 5],&signalValues[mySignalStart + 3]); // line circom 103
Fr_eq(&expaux[0],&expaux[1],&expaux[2]); // line circom 103
if (!Fr_isTrue(&expaux[0])) std::cout << "Failed assert in template/function " << myTemplateName << " line 103. " <<  "Followed trace of components: " << ctx->getTrace(myId) << std::endl;
assert(Fr_isTrue(&expaux[0]));
{
PFrElement aux_dest = &signalValues[mySignalStart + 0];
// load src
Fr_mul(&expaux[4],&circuitConstants[1],&signalValues[mySignalStart + 6]); // line circom 105
Fr_mul(&expaux[3],&expaux[4],&signalValues[mySignalStart + 6]); // line circom 105
Fr_sub(&expaux[2],&expaux[3],&circuitConstants[10]); // line circom 105
Fr_sub(&expaux[1],&expaux[2],&signalValues[mySignalStart + 2]); // line circom 105
Fr_sub(&expaux[0],&expaux[1],&signalValues[mySignalStart + 4]); // line circom 105
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 1];
// load src
Fr_sub(&expaux[3],&signalValues[mySignalStart + 2],&signalValues[mySignalStart + 0]); // line circom 106
Fr_mul(&expaux[1],&signalValues[mySignalStart + 6],&expaux[3]); // line circom 106
Fr_sub(&expaux[0],&expaux[1],&signalValues[mySignalStart + 3]); // line circom 106
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
}

void Window4_4_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 4;
ctx->componentMemory[coffset].templateName = "Window4";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 6;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[8];
}

void Window4_4_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[6];
FrElement lvar[0];
uint sub_component_aux;
{
uint aux_create = 0;
int aux_cmp_num = 7+ctx_index+1;
uint csoffset = mySignalStart+58;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "mux";
mySubcomponents[aux_create+i] = aux_cmp_num;
MultiMux3_1_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
csoffset += 38 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 1;
int aux_cmp_num = 6+ctx_index+1;
uint csoffset = mySignalStart+52;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "dbl2";
mySubcomponents[aux_create+i] = aux_cmp_num;
MontgomeryDouble_2_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
csoffset += 6 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 2;
int aux_cmp_num = 0+ctx_index+1;
uint csoffset = mySignalStart+10;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "adr3";
mySubcomponents[aux_create+i] = aux_cmp_num;
MontgomeryAdd_3_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
csoffset += 7 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 3;
int aux_cmp_num = 1+ctx_index+1;
uint csoffset = mySignalStart+17;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "adr4";
mySubcomponents[aux_create+i] = aux_cmp_num;
MontgomeryAdd_3_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
csoffset += 7 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 4;
int aux_cmp_num = 2+ctx_index+1;
uint csoffset = mySignalStart+24;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "adr5";
mySubcomponents[aux_create+i] = aux_cmp_num;
MontgomeryAdd_3_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
csoffset += 7 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 5;
int aux_cmp_num = 3+ctx_index+1;
uint csoffset = mySignalStart+31;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "adr6";
mySubcomponents[aux_create+i] = aux_cmp_num;
MontgomeryAdd_3_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
csoffset += 7 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 6;
int aux_cmp_num = 4+ctx_index+1;
uint csoffset = mySignalStart+38;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "adr7";
mySubcomponents[aux_create+i] = aux_cmp_num;
MontgomeryAdd_3_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
csoffset += 7 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 7;
int aux_cmp_num = 5+ctx_index+1;
uint csoffset = mySignalStart+45;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "adr8";
mySubcomponents[aux_create+i] = aux_cmp_num;
MontgomeryAdd_3_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
csoffset += 7 ;
aux_cmp_num += 1;
}
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 18];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 4]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 19];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 5]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 20];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 6]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 8]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 10];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 9]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 1;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 8]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 1;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 9]);
}
// need to run sub component
assert(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter));
MontgomeryDouble_2_run(mySubcomponents[cmp_index_ref],ctx);
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[1]].signalStart + 0]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 11];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[1]].signalStart + 1]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 2;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 8]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 2;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 9]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 2;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 4];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[1]].signalStart + 0]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 2;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 5];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[1]].signalStart + 1]);
}
// need to run sub component
assert(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter));
MontgomeryAdd_3_run(mySubcomponents[cmp_index_ref],ctx);
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 4];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[2]].signalStart + 0]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 12];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[2]].signalStart + 1]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 3;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 8]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 3;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 9]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 3;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 4];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[2]].signalStart + 0]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 3;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 5];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[2]].signalStart + 1]);
}
// need to run sub component
assert(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter));
MontgomeryAdd_3_run(mySubcomponents[cmp_index_ref],ctx);
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 5];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[3]].signalStart + 0]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 13];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[3]].signalStart + 1]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 4;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 8]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 4;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 9]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 4;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 4];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[3]].signalStart + 0]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 4;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 5];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[3]].signalStart + 1]);
}
// need to run sub component
assert(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter));
MontgomeryAdd_3_run(mySubcomponents[cmp_index_ref],ctx);
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 6];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[4]].signalStart + 0]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 14];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[4]].signalStart + 1]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 5;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 8]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 5;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 9]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 5;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 4];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[4]].signalStart + 0]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 5;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 5];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[4]].signalStart + 1]);
}
// need to run sub component
assert(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter));
MontgomeryAdd_3_run(mySubcomponents[cmp_index_ref],ctx);
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 7];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[5]].signalStart + 0]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 15];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[5]].signalStart + 1]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 6;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 8]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 6;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 9]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 6;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 4];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[5]].signalStart + 0]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 6;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 5];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[5]].signalStart + 1]);
}
// need to run sub component
assert(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter));
MontgomeryAdd_3_run(mySubcomponents[cmp_index_ref],ctx);
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 8];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[6]].signalStart + 0]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 16];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[6]].signalStart + 1]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 7;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 8]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 7;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 9]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 7;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 4];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[6]].signalStart + 0]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 7;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 5];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[6]].signalStart + 1]);
}
// need to run sub component
assert(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter));
MontgomeryAdd_3_run(mySubcomponents[cmp_index_ref],ctx);
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 9];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[7]].signalStart + 0]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 17];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[7]].signalStart + 1]);
}
// need to run sub component
assert(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter));
MultiMux3_1_run(mySubcomponents[cmp_index_ref],ctx);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[7]].signalStart + 0]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 3];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[7]].signalStart + 1]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 0];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[0]].signalStart + 0]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 1];
// load src
Fr_neg(&expaux[3],&ctx->signalValues[ctx->componentMemory[mySubcomponents[0]].signalStart + 1]); // line circom 108
Fr_mul(&expaux[2],&expaux[3],&circuitConstants[2]); // line circom 108
Fr_mul(&expaux[1],&expaux[2],&signalValues[mySignalStart + 7]); // line circom 108
Fr_add(&expaux[0],&expaux[1],&ctx->signalValues[ctx->componentMemory[mySubcomponents[0]].signalStart + 1]); // line circom 108
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
}

void Montgomery2Edwards_5_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 5;
ctx->componentMemory[coffset].templateName = "Montgomery2Edwards";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 2;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
}

void Montgomery2Edwards_5_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[6];
FrElement lvar[0];
uint sub_component_aux;
{
PFrElement aux_dest = &signalValues[mySignalStart + 0];
// load src
Fr_div(&expaux[0],&signalValues[mySignalStart + 2],&signalValues[mySignalStart + 3]); // line circom 53
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 1];
// load src
Fr_sub(&expaux[1],&signalValues[mySignalStart + 2],&circuitConstants[1]); // line circom 54
Fr_add(&expaux[2],&signalValues[mySignalStart + 2],&circuitConstants[1]); // line circom 54
Fr_div(&expaux[0],&expaux[1],&expaux[2]); // line circom 54
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_mul(&expaux[1],&signalValues[mySignalStart + 0],&signalValues[mySignalStart + 3]); // line circom 56
Fr_eq(&expaux[0],&expaux[1],&signalValues[mySignalStart + 2]); // line circom 56
if (!Fr_isTrue(&expaux[0])) std::cout << "Failed assert in template/function " << myTemplateName << " line 56. " <<  "Followed trace of components: " << ctx->getTrace(myId) << std::endl;
assert(Fr_isTrue(&expaux[0]));
Fr_add(&expaux[3],&signalValues[mySignalStart + 2],&circuitConstants[1]); // line circom 57
Fr_mul(&expaux[1],&signalValues[mySignalStart + 1],&expaux[3]); // line circom 57
Fr_sub(&expaux[2],&signalValues[mySignalStart + 2],&circuitConstants[1]); // line circom 57
Fr_eq(&expaux[0],&expaux[1],&expaux[2]); // line circom 57
if (!Fr_isTrue(&expaux[0])) std::cout << "Failed assert in template/function " << myTemplateName << " line 57. " <<  "Followed trace of components: " << ctx->getTrace(myId) << std::endl;
assert(Fr_isTrue(&expaux[0]));
}

void Segment_6_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 6;
ctx->componentMemory[coffset].templateName = "Segment";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 202;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[199];
}

void Segment_6_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[4];
FrElement lvar[3];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[12]);
}
{
uint aux_create = 0;
int aux_cmp_num = 147+ctx_index+1;
uint csoffset = mySignalStart+1135;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "e2m";
mySubcomponents[aux_create+i] = aux_cmp_num;
Edwards2Montgomery_0_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
csoffset += 4 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 1;
int aux_cmp_num = 149+ctx_index+1;
uint csoffset = mySignalStart+1143;
uint aux_dimensions[1] = {50};
for (uint i = 0; i < 50; i++) {
std::string new_cmp_name = "windows"+ctx->generate_position_array(aux_dimensions, 1, i);
mySubcomponents[aux_create+i] = aux_cmp_num;
Window4_4_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
csoffset += 96 ;
aux_cmp_num += 9;
}
}
{
uint aux_create = 51;
int aux_cmp_num = 49+ctx_index+1;
uint csoffset = mySignalStart+547;
uint aux_dimensions[1] = {49};
for (uint i = 0; i < 49; i++) {
std::string new_cmp_name = "doublers1"+ctx->generate_position_array(aux_dimensions, 1, i);
mySubcomponents[aux_create+i] = aux_cmp_num;
MontgomeryDouble_2_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
csoffset += 6 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 100;
int aux_cmp_num = 98+ctx_index+1;
uint csoffset = mySignalStart+841;
uint aux_dimensions[1] = {49};
for (uint i = 0; i < 49; i++) {
std::string new_cmp_name = "doublers2"+ctx->generate_position_array(aux_dimensions, 1, i);
mySubcomponents[aux_create+i] = aux_cmp_num;
MontgomeryDouble_2_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
csoffset += 6 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 149;
int aux_cmp_num = 0+ctx_index+1;
uint csoffset = mySignalStart+204;
uint aux_dimensions[1] = {49};
for (uint i = 0; i < 49; i++) {
std::string new_cmp_name = "adders"+ctx->generate_position_array(aux_dimensions, 1, i);
mySubcomponents[aux_create+i] = aux_cmp_num;
MontgomeryAdd_3_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
csoffset += 7 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 198;
int aux_cmp_num = 148+ctx_index+1;
uint csoffset = mySignalStart+1139;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "m2e";
mySubcomponents[aux_create+i] = aux_cmp_num;
Montgomery2Edwards_5_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
csoffset += 4 ;
aux_cmp_num += 1;
}
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 202]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 203]);
}
// need to run sub component
assert(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter));
Edwards2Montgomery_0_run(mySubcomponents[cmp_index_ref],ctx);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[1],&circuitConstants[12]); // line circom 130
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[2],&circuitConstants[6]); // line circom 132
while(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = ((1 * Fr_toInt(&lvar[1])) + 1);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * Fr_toInt(&lvar[2])) + 4)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * ((4 * Fr_toInt(&lvar[1])) + Fr_toInt(&lvar[2]))) + 2)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
Window4_4_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
PFrElement aux_dest = &lvar[2];
// load src
Fr_add(&expaux[0],&lvar[2],&circuitConstants[1]); // line circom 132
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[2],&circuitConstants[6]); // line circom 132
}
Fr_eq(&expaux[0],&lvar[1],&circuitConstants[0]); // line circom 135
if(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = 1;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 8];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[0]].signalStart + 0]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
Window4_4_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 1;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 9];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[0]].signalStart + 1]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
Window4_4_run(mySubcomponents[cmp_index_ref],ctx);

}
}
}else{
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[1]); // line circom 141
{
uint cmp_index_ref = ((1 * Fr_toInt(&expaux[0])) + 51);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[1]); // line circom 141
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&expaux[0])) + 1)]].signalStart + 2]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
MontgomeryDouble_2_run(mySubcomponents[cmp_index_ref],ctx);

}
}
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[1]); // line circom 142
{
uint cmp_index_ref = ((1 * Fr_toInt(&expaux[0])) + 51);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[1]); // line circom 142
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&expaux[0])) + 1)]].signalStart + 3]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
MontgomeryDouble_2_run(mySubcomponents[cmp_index_ref],ctx);

}
}
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[1]); // line circom 143
{
uint cmp_index_ref = ((1 * Fr_toInt(&expaux[0])) + 100);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[1]); // line circom 143
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&expaux[0])) + 51)]].signalStart + 0]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
MontgomeryDouble_2_run(mySubcomponents[cmp_index_ref],ctx);

}
}
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[1]); // line circom 144
{
uint cmp_index_ref = ((1 * Fr_toInt(&expaux[0])) + 100);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[1]); // line circom 144
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&expaux[0])) + 51)]].signalStart + 1]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
MontgomeryDouble_2_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = ((1 * Fr_toInt(&lvar[1])) + 1);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 8];
// load src
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[1]); // line circom 146
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&expaux[0])) + 100)]].signalStart + 0]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
Window4_4_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = ((1 * Fr_toInt(&lvar[1])) + 1);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 9];
// load src
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[1]); // line circom 147
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&expaux[0])) + 100)]].signalStart + 1]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
Window4_4_run(mySubcomponents[cmp_index_ref],ctx);

}
}
Fr_eq(&expaux[0],&lvar[1],&circuitConstants[1]); // line circom 150
if(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = 149;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[1]].signalStart + 0]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
MontgomeryAdd_3_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 149;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[1]].signalStart + 1]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
MontgomeryAdd_3_run(mySubcomponents[cmp_index_ref],ctx);

}
}
}else{
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[1]); // line circom 154
{
uint cmp_index_ref = ((1 * Fr_toInt(&expaux[0])) + 149);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[2]); // line circom 154
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&expaux[0])) + 149)]].signalStart + 0]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
MontgomeryAdd_3_run(mySubcomponents[cmp_index_ref],ctx);

}
}
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[1]); // line circom 155
{
uint cmp_index_ref = ((1 * Fr_toInt(&expaux[0])) + 149);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[2]); // line circom 155
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&expaux[0])) + 149)]].signalStart + 1]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
MontgomeryAdd_3_run(mySubcomponents[cmp_index_ref],ctx);

}
}
}
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[1]); // line circom 157
{
uint cmp_index_ref = ((1 * Fr_toInt(&expaux[0])) + 149);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 4];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&lvar[1])) + 1)]].signalStart + 0]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
MontgomeryAdd_3_run(mySubcomponents[cmp_index_ref],ctx);

}
}
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[1]); // line circom 158
{
uint cmp_index_ref = ((1 * Fr_toInt(&expaux[0])) + 149);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 5];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&lvar[1])) + 1)]].signalStart + 1]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
MontgomeryAdd_3_run(mySubcomponents[cmp_index_ref],ctx);

}
}
}
{
PFrElement aux_dest = &lvar[1];
// load src
Fr_add(&expaux[0],&lvar[1],&circuitConstants[1]); // line circom 130
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[1],&circuitConstants[12]); // line circom 130
}
{
uint cmp_index_ref = 198;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[197]].signalStart + 0]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 198;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[197]].signalStart + 1]);
}
// need to run sub component
assert(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter));
Montgomery2Edwards_5_run(mySubcomponents[cmp_index_ref],ctx);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 0];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[198]].signalStart + 0]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 1];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[198]].signalStart + 1]);
}
}

void Segment_7_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 7;
ctx->componentMemory[coffset].templateName = "Segment";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 114;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[111];
}

void Segment_7_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[4];
FrElement lvar[3];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[14]);
}
{
uint aux_create = 0;
int aux_cmp_num = 81+ctx_index+1;
uint csoffset = mySignalStart+629;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "e2m";
mySubcomponents[aux_create+i] = aux_cmp_num;
Edwards2Montgomery_0_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
csoffset += 4 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 1;
int aux_cmp_num = 83+ctx_index+1;
uint csoffset = mySignalStart+637;
uint aux_dimensions[1] = {28};
for (uint i = 0; i < 28; i++) {
std::string new_cmp_name = "windows"+ctx->generate_position_array(aux_dimensions, 1, i);
mySubcomponents[aux_create+i] = aux_cmp_num;
Window4_4_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
csoffset += 96 ;
aux_cmp_num += 9;
}
}
{
uint aux_create = 29;
int aux_cmp_num = 27+ctx_index+1;
uint csoffset = mySignalStart+305;
uint aux_dimensions[1] = {27};
for (uint i = 0; i < 27; i++) {
std::string new_cmp_name = "doublers1"+ctx->generate_position_array(aux_dimensions, 1, i);
mySubcomponents[aux_create+i] = aux_cmp_num;
MontgomeryDouble_2_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
csoffset += 6 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 56;
int aux_cmp_num = 54+ctx_index+1;
uint csoffset = mySignalStart+467;
uint aux_dimensions[1] = {27};
for (uint i = 0; i < 27; i++) {
std::string new_cmp_name = "doublers2"+ctx->generate_position_array(aux_dimensions, 1, i);
mySubcomponents[aux_create+i] = aux_cmp_num;
MontgomeryDouble_2_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
csoffset += 6 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 83;
int aux_cmp_num = 0+ctx_index+1;
uint csoffset = mySignalStart+116;
uint aux_dimensions[1] = {27};
for (uint i = 0; i < 27; i++) {
std::string new_cmp_name = "adders"+ctx->generate_position_array(aux_dimensions, 1, i);
mySubcomponents[aux_create+i] = aux_cmp_num;
MontgomeryAdd_3_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
csoffset += 7 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 110;
int aux_cmp_num = 82+ctx_index+1;
uint csoffset = mySignalStart+633;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "m2e";
mySubcomponents[aux_create+i] = aux_cmp_num;
Montgomery2Edwards_5_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
csoffset += 4 ;
aux_cmp_num += 1;
}
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 114]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 115]);
}
// need to run sub component
assert(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter));
Edwards2Montgomery_0_run(mySubcomponents[cmp_index_ref],ctx);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[1],&circuitConstants[14]); // line circom 130
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[2],&circuitConstants[6]); // line circom 132
while(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = ((1 * Fr_toInt(&lvar[1])) + 1);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * Fr_toInt(&lvar[2])) + 4)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * ((4 * Fr_toInt(&lvar[1])) + Fr_toInt(&lvar[2]))) + 2)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
Window4_4_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
PFrElement aux_dest = &lvar[2];
// load src
Fr_add(&expaux[0],&lvar[2],&circuitConstants[1]); // line circom 132
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[2],&circuitConstants[6]); // line circom 132
}
Fr_eq(&expaux[0],&lvar[1],&circuitConstants[0]); // line circom 135
if(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = 1;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 8];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[0]].signalStart + 0]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
Window4_4_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 1;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 9];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[0]].signalStart + 1]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
Window4_4_run(mySubcomponents[cmp_index_ref],ctx);

}
}
}else{
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[1]); // line circom 141
{
uint cmp_index_ref = ((1 * Fr_toInt(&expaux[0])) + 29);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[1]); // line circom 141
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&expaux[0])) + 1)]].signalStart + 2]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
MontgomeryDouble_2_run(mySubcomponents[cmp_index_ref],ctx);

}
}
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[1]); // line circom 142
{
uint cmp_index_ref = ((1 * Fr_toInt(&expaux[0])) + 29);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[1]); // line circom 142
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&expaux[0])) + 1)]].signalStart + 3]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
MontgomeryDouble_2_run(mySubcomponents[cmp_index_ref],ctx);

}
}
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[1]); // line circom 143
{
uint cmp_index_ref = ((1 * Fr_toInt(&expaux[0])) + 56);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[1]); // line circom 143
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&expaux[0])) + 29)]].signalStart + 0]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
MontgomeryDouble_2_run(mySubcomponents[cmp_index_ref],ctx);

}
}
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[1]); // line circom 144
{
uint cmp_index_ref = ((1 * Fr_toInt(&expaux[0])) + 56);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[1]); // line circom 144
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&expaux[0])) + 29)]].signalStart + 1]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
MontgomeryDouble_2_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = ((1 * Fr_toInt(&lvar[1])) + 1);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 8];
// load src
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[1]); // line circom 146
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&expaux[0])) + 56)]].signalStart + 0]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
Window4_4_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = ((1 * Fr_toInt(&lvar[1])) + 1);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 9];
// load src
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[1]); // line circom 147
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&expaux[0])) + 56)]].signalStart + 1]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
Window4_4_run(mySubcomponents[cmp_index_ref],ctx);

}
}
Fr_eq(&expaux[0],&lvar[1],&circuitConstants[1]); // line circom 150
if(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = 83;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[1]].signalStart + 0]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
MontgomeryAdd_3_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 83;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[1]].signalStart + 1]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
MontgomeryAdd_3_run(mySubcomponents[cmp_index_ref],ctx);

}
}
}else{
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[1]); // line circom 154
{
uint cmp_index_ref = ((1 * Fr_toInt(&expaux[0])) + 83);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[2]); // line circom 154
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&expaux[0])) + 83)]].signalStart + 0]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
MontgomeryAdd_3_run(mySubcomponents[cmp_index_ref],ctx);

}
}
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[1]); // line circom 155
{
uint cmp_index_ref = ((1 * Fr_toInt(&expaux[0])) + 83);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[2]); // line circom 155
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&expaux[0])) + 83)]].signalStart + 1]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
MontgomeryAdd_3_run(mySubcomponents[cmp_index_ref],ctx);

}
}
}
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[1]); // line circom 157
{
uint cmp_index_ref = ((1 * Fr_toInt(&expaux[0])) + 83);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 4];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&lvar[1])) + 1)]].signalStart + 0]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
MontgomeryAdd_3_run(mySubcomponents[cmp_index_ref],ctx);

}
}
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[1]); // line circom 158
{
uint cmp_index_ref = ((1 * Fr_toInt(&expaux[0])) + 83);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 5];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&lvar[1])) + 1)]].signalStart + 1]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
MontgomeryAdd_3_run(mySubcomponents[cmp_index_ref],ctx);

}
}
}
{
PFrElement aux_dest = &lvar[1];
// load src
Fr_add(&expaux[0],&lvar[1],&circuitConstants[1]); // line circom 130
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[1],&circuitConstants[14]); // line circom 130
}
{
uint cmp_index_ref = 110;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[109]].signalStart + 0]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 110;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[109]].signalStart + 1]);
}
// need to run sub component
assert(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter));
Montgomery2Edwards_5_run(mySubcomponents[cmp_index_ref],ctx);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 0];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[110]].signalStart + 0]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 1];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[110]].signalStart + 1]);
}
}

void BabyAdd_8_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 8;
ctx->componentMemory[coffset].templateName = "BabyAdd";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 4;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
}

void BabyAdd_8_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[8];
FrElement lvar[2];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[8]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[9]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 6];
// load src
Fr_mul(&expaux[0],&signalValues[mySignalStart + 2],&signalValues[mySignalStart + 5]); // line circom 40
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 7];
// load src
Fr_mul(&expaux[0],&signalValues[mySignalStart + 3],&signalValues[mySignalStart + 4]); // line circom 41
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 8];
// load src
Fr_mul(&expaux[2],&circuitConstants[16],&signalValues[mySignalStart + 2]); // line circom 42
Fr_add(&expaux[1],&expaux[2],&signalValues[mySignalStart + 3]); // line circom 42
Fr_add(&expaux[2],&signalValues[mySignalStart + 4],&signalValues[mySignalStart + 5]); // line circom 42
Fr_mul(&expaux[0],&expaux[1],&expaux[2]); // line circom 42
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 9];
// load src
Fr_mul(&expaux[0],&signalValues[mySignalStart + 6],&signalValues[mySignalStart + 7]); // line circom 43
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 0];
// load src
Fr_add(&expaux[1],&signalValues[mySignalStart + 6],&signalValues[mySignalStart + 7]); // line circom 45
Fr_mul(&expaux[4],&circuitConstants[9],&signalValues[mySignalStart + 9]); // line circom 45
Fr_add(&expaux[2],&circuitConstants[1],&expaux[4]); // line circom 45
Fr_div(&expaux[0],&expaux[1],&expaux[2]); // line circom 45
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_mul(&expaux[4],&circuitConstants[9],&signalValues[mySignalStart + 9]); // line circom 46
Fr_add(&expaux[2],&circuitConstants[1],&expaux[4]); // line circom 46
Fr_mul(&expaux[1],&expaux[2],&signalValues[mySignalStart + 0]); // line circom 46
Fr_add(&expaux[2],&signalValues[mySignalStart + 6],&signalValues[mySignalStart + 7]); // line circom 46
Fr_eq(&expaux[0],&expaux[1],&expaux[2]); // line circom 46
if (!Fr_isTrue(&expaux[0])) std::cout << "Failed assert in template/function " << myTemplateName << " line 46. " <<  "Followed trace of components: " << ctx->getTrace(myId) << std::endl;
assert(Fr_isTrue(&expaux[0]));
{
PFrElement aux_dest = &signalValues[mySignalStart + 1];
// load src
Fr_mul(&expaux[4],&circuitConstants[8],&signalValues[mySignalStart + 6]); // line circom 48
Fr_add(&expaux[2],&signalValues[mySignalStart + 8],&expaux[4]); // line circom 48
Fr_sub(&expaux[1],&expaux[2],&signalValues[mySignalStart + 7]); // line circom 48
Fr_mul(&expaux[4],&circuitConstants[9],&signalValues[mySignalStart + 9]); // line circom 48
Fr_sub(&expaux[2],&circuitConstants[1],&expaux[4]); // line circom 48
Fr_div(&expaux[0],&expaux[1],&expaux[2]); // line circom 48
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_mul(&expaux[4],&circuitConstants[9],&signalValues[mySignalStart + 9]); // line circom 49
Fr_sub(&expaux[2],&circuitConstants[1],&expaux[4]); // line circom 49
Fr_mul(&expaux[1],&expaux[2],&signalValues[mySignalStart + 1]); // line circom 49
Fr_mul(&expaux[5],&circuitConstants[8],&signalValues[mySignalStart + 6]); // line circom 49
Fr_add(&expaux[3],&signalValues[mySignalStart + 8],&expaux[5]); // line circom 49
Fr_sub(&expaux[2],&expaux[3],&signalValues[mySignalStart + 7]); // line circom 49
Fr_eq(&expaux[0],&expaux[1],&expaux[2]); // line circom 49
if (!Fr_isTrue(&expaux[0])) std::cout << "Failed assert in template/function " << myTemplateName << " line 49. " <<  "Followed trace of components: " << ctx->getTrace(myId) << std::endl;
assert(Fr_isTrue(&expaux[0]));
}

void Pedersen_9_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 9;
ctx->componentMemory[coffset].templateName = "Pedersen";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 512;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[5];
}

void Pedersen_9_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[5];
FrElement lvar[46];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[17]);
}
{
uint aux_create = 0;
int aux_cmp_num = 2+ctx_index+1;
uint csoffset = mySignalStart+534;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "segments[0]";
mySubcomponents[aux_create+i] = aux_cmp_num;
Segment_6_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
csoffset += 0 ;
aux_cmp_num += 0;
}
}
{
uint aux_create = 1;
int aux_cmp_num = 602+ctx_index+1;
uint csoffset = mySignalStart+6477;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "segments[1]";
mySubcomponents[aux_create+i] = aux_cmp_num;
Segment_6_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
csoffset += 0 ;
aux_cmp_num += 0;
}
}
{
uint aux_create = 2;
int aux_cmp_num = 1202+ctx_index+1;
uint csoffset = mySignalStart+12420;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "segments[2]";
mySubcomponents[aux_create+i] = aux_cmp_num;
Segment_7_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
csoffset += 0 ;
aux_cmp_num += 0;
}
}
{
uint aux_create = 3;
int aux_cmp_num = 0+ctx_index+1;
uint csoffset = mySignalStart+514;
uint aux_dimensions[1] = {2};
for (uint i = 0; i < 2; i++) {
std::string new_cmp_name = "adders"+ctx->generate_position_array(aux_dimensions, 1, i);
mySubcomponents[aux_create+i] = aux_cmp_num;
BabyAdd_8_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
csoffset += 10 ;
aux_cmp_num += 1;
}
}
{
PFrElement aux_dest = &lvar[21];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[18]);
}
{
PFrElement aux_dest = &lvar[22];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[19]);
}
{
PFrElement aux_dest = &lvar[23];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[20]);
}
{
PFrElement aux_dest = &lvar[24];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[21]);
}
{
PFrElement aux_dest = &lvar[25];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[22]);
}
{
PFrElement aux_dest = &lvar[26];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[23]);
}
{
PFrElement aux_dest = &lvar[27];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[24]);
}
{
PFrElement aux_dest = &lvar[28];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[25]);
}
{
PFrElement aux_dest = &lvar[29];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[26]);
}
{
PFrElement aux_dest = &lvar[30];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[27]);
}
{
PFrElement aux_dest = &lvar[31];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[28]);
}
{
PFrElement aux_dest = &lvar[32];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[29]);
}
{
PFrElement aux_dest = &lvar[33];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[30]);
}
{
PFrElement aux_dest = &lvar[34];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[31]);
}
{
PFrElement aux_dest = &lvar[35];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[32]);
}
{
PFrElement aux_dest = &lvar[36];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[33]);
}
{
PFrElement aux_dest = &lvar[37];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[34]);
}
{
PFrElement aux_dest = &lvar[38];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[35]);
}
{
PFrElement aux_dest = &lvar[39];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[36]);
}
{
PFrElement aux_dest = &lvar[40];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[37]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copyn(aux_dest,&lvar[21],2);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copyn(aux_dest,&lvar[23],2);
}
{
PFrElement aux_dest = &lvar[5];
// load src
// end load src
Fr_copyn(aux_dest,&lvar[25],2);
}
{
PFrElement aux_dest = &lvar[7];
// load src
// end load src
Fr_copyn(aux_dest,&lvar[27],2);
}
{
PFrElement aux_dest = &lvar[9];
// load src
// end load src
Fr_copyn(aux_dest,&lvar[29],2);
}
{
PFrElement aux_dest = &lvar[11];
// load src
// end load src
Fr_copyn(aux_dest,&lvar[31],2);
}
{
PFrElement aux_dest = &lvar[13];
// load src
// end load src
Fr_copyn(aux_dest,&lvar[33],2);
}
{
PFrElement aux_dest = &lvar[15];
// load src
// end load src
Fr_copyn(aux_dest,&lvar[35],2);
}
{
PFrElement aux_dest = &lvar[17];
// load src
// end load src
Fr_copyn(aux_dest,&lvar[37],2);
}
{
PFrElement aux_dest = &lvar[19];
// load src
// end load src
Fr_copyn(aux_dest,&lvar[39],2);
}
{
PFrElement aux_dest = &lvar[41];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[7]);
}
{
PFrElement aux_dest = &lvar[42];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[42],&circuitConstants[7]); // line circom 202
while(Fr_isTrue(&expaux[0])){
Fr_eq(&expaux[0],&lvar[42],&circuitConstants[2]); // line circom 203
if(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[44];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[40]);
}
}else{
{
PFrElement aux_dest = &lvar[44];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[41]);
}
}
{
PFrElement aux_dest = &lvar[45];
// load src
Fr_sub(&expaux[2],&lvar[44],&circuitConstants[1]); // line circom 204
Fr_idiv(&expaux[1],&expaux[2],&circuitConstants[6]); // line circom 204
Fr_add(&expaux[0],&expaux[1],&circuitConstants[1]); // line circom 204
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
uint cmp_index_ref = ((1 * Fr_toInt(&lvar[42])) + 0);
{
uint map_index_aux[1];
map_index_aux[0]=0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ctx->templateInsId2IOSignalInfo[ctx->componentMemory[mySubcomponents[cmp_index_ref]].templateId].defs[2].offset+map_index_aux[0]];
// load src
// end load src
Fr_copy(aux_dest,&lvar[(((2 * Fr_toInt(&lvar[42])) + 0) + 1)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
(*_functionTable[ctx->componentMemory[mySubcomponents[cmp_index_ref]].templateId])(mySubcomponents[cmp_index_ref],ctx);

}
}
}
{
uint cmp_index_ref = ((1 * Fr_toInt(&lvar[42])) + 0);
{
uint map_index_aux[1];
map_index_aux[0]=1;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ctx->templateInsId2IOSignalInfo[ctx->componentMemory[mySubcomponents[cmp_index_ref]].templateId].defs[2].offset+map_index_aux[0]];
// load src
// end load src
Fr_copy(aux_dest,&lvar[(((2 * Fr_toInt(&lvar[42])) + 1) + 1)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
(*_functionTable[ctx->componentMemory[mySubcomponents[cmp_index_ref]].templateId])(mySubcomponents[cmp_index_ref],ctx);

}
}
}
{
PFrElement aux_dest = &lvar[43];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[43],&lvar[44]); // line circom 208
while(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = ((1 * Fr_toInt(&lvar[42])) + 0);
{
uint map_index_aux[1];
map_index_aux[0]=Fr_toInt(&lvar[43]);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ctx->templateInsId2IOSignalInfo[ctx->componentMemory[mySubcomponents[cmp_index_ref]].templateId].defs[1].offset+map_index_aux[0]];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * ((Fr_toInt(&lvar[42]) * 200) + Fr_toInt(&lvar[43]))) + 2)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
(*_functionTable[ctx->componentMemory[mySubcomponents[cmp_index_ref]].templateId])(mySubcomponents[cmp_index_ref],ctx);

}
}
}
{
PFrElement aux_dest = &lvar[43];
// load src
Fr_add(&expaux[0],&lvar[43],&circuitConstants[1]); // line circom 208
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[43],&lvar[44]); // line circom 208
}
{
PFrElement aux_dest = &lvar[43];
// load src
// end load src
Fr_copy(aux_dest,&lvar[44]);
}
{
PFrElement aux_dest = &lvar[42];
// load src
Fr_add(&expaux[0],&lvar[42],&circuitConstants[1]); // line circom 202
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[42],&circuitConstants[7]); // line circom 202
}
{
PFrElement aux_dest = &lvar[42];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[42],&circuitConstants[2]); // line circom 219
while(Fr_isTrue(&expaux[0])){
Fr_eq(&expaux[0],&lvar[42],&circuitConstants[0]); // line circom 221
if(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = 3;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[0]].signalStart + ctx->templateInsId2IOSignalInfo[ctx->componentMemory[mySubcomponents[0]].templateId].defs[0].offset+0]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
BabyAdd_8_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 3;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[0]].signalStart + ctx->templateInsId2IOSignalInfo[ctx->componentMemory[mySubcomponents[0]].templateId].defs[0].offset+1]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
BabyAdd_8_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 3;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 4];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[1]].signalStart + ctx->templateInsId2IOSignalInfo[ctx->componentMemory[mySubcomponents[1]].templateId].defs[0].offset+0]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
BabyAdd_8_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 3;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 5];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[1]].signalStart + ctx->templateInsId2IOSignalInfo[ctx->componentMemory[mySubcomponents[1]].templateId].defs[0].offset+1]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
BabyAdd_8_run(mySubcomponents[cmp_index_ref],ctx);

}
}
}else{
{
uint cmp_index_ref = 4;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[3]].signalStart + 0]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
BabyAdd_8_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 4;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[3]].signalStart + 1]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
BabyAdd_8_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 4;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 4];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[2]].signalStart + ctx->templateInsId2IOSignalInfo[ctx->componentMemory[mySubcomponents[2]].templateId].defs[0].offset+0]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
BabyAdd_8_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 4;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 5];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[2]].signalStart + ctx->templateInsId2IOSignalInfo[ctx->componentMemory[mySubcomponents[2]].templateId].defs[0].offset+1]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
BabyAdd_8_run(mySubcomponents[cmp_index_ref],ctx);

}
}
}
{
PFrElement aux_dest = &lvar[42];
// load src
Fr_add(&expaux[0],&lvar[42],&circuitConstants[1]); // line circom 219
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[42],&circuitConstants[2]); // line circom 219
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 0];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[4]].signalStart + 0]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 1];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[4]].signalStart + 1]);
}
}

void Segment_10_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 10;
ctx->componentMemory[coffset].templateName = "Segment";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 58;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[55];
}

void Segment_10_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[4];
FrElement lvar[3];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[42]);
}
{
uint aux_create = 0;
int aux_cmp_num = 39+ctx_index+1;
uint csoffset = mySignalStart+307;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "e2m";
mySubcomponents[aux_create+i] = aux_cmp_num;
Edwards2Montgomery_0_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
csoffset += 4 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 1;
int aux_cmp_num = 41+ctx_index+1;
uint csoffset = mySignalStart+315;
uint aux_dimensions[1] = {14};
for (uint i = 0; i < 14; i++) {
std::string new_cmp_name = "windows"+ctx->generate_position_array(aux_dimensions, 1, i);
mySubcomponents[aux_create+i] = aux_cmp_num;
Window4_4_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
csoffset += 96 ;
aux_cmp_num += 9;
}
}
{
uint aux_create = 15;
int aux_cmp_num = 13+ctx_index+1;
uint csoffset = mySignalStart+151;
uint aux_dimensions[1] = {13};
for (uint i = 0; i < 13; i++) {
std::string new_cmp_name = "doublers1"+ctx->generate_position_array(aux_dimensions, 1, i);
mySubcomponents[aux_create+i] = aux_cmp_num;
MontgomeryDouble_2_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
csoffset += 6 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 28;
int aux_cmp_num = 26+ctx_index+1;
uint csoffset = mySignalStart+229;
uint aux_dimensions[1] = {13};
for (uint i = 0; i < 13; i++) {
std::string new_cmp_name = "doublers2"+ctx->generate_position_array(aux_dimensions, 1, i);
mySubcomponents[aux_create+i] = aux_cmp_num;
MontgomeryDouble_2_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
csoffset += 6 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 41;
int aux_cmp_num = 0+ctx_index+1;
uint csoffset = mySignalStart+60;
uint aux_dimensions[1] = {13};
for (uint i = 0; i < 13; i++) {
std::string new_cmp_name = "adders"+ctx->generate_position_array(aux_dimensions, 1, i);
mySubcomponents[aux_create+i] = aux_cmp_num;
MontgomeryAdd_3_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
csoffset += 7 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 54;
int aux_cmp_num = 40+ctx_index+1;
uint csoffset = mySignalStart+311;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "m2e";
mySubcomponents[aux_create+i] = aux_cmp_num;
Montgomery2Edwards_5_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
csoffset += 4 ;
aux_cmp_num += 1;
}
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 58]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 59]);
}
// need to run sub component
assert(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter));
Edwards2Montgomery_0_run(mySubcomponents[cmp_index_ref],ctx);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[1],&circuitConstants[42]); // line circom 130
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[2],&circuitConstants[6]); // line circom 132
while(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = ((1 * Fr_toInt(&lvar[1])) + 1);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * Fr_toInt(&lvar[2])) + 4)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * ((4 * Fr_toInt(&lvar[1])) + Fr_toInt(&lvar[2]))) + 2)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
Window4_4_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
PFrElement aux_dest = &lvar[2];
// load src
Fr_add(&expaux[0],&lvar[2],&circuitConstants[1]); // line circom 132
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[2],&circuitConstants[6]); // line circom 132
}
Fr_eq(&expaux[0],&lvar[1],&circuitConstants[0]); // line circom 135
if(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = 1;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 8];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[0]].signalStart + 0]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
Window4_4_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 1;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 9];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[0]].signalStart + 1]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
Window4_4_run(mySubcomponents[cmp_index_ref],ctx);

}
}
}else{
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[1]); // line circom 141
{
uint cmp_index_ref = ((1 * Fr_toInt(&expaux[0])) + 15);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[1]); // line circom 141
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&expaux[0])) + 1)]].signalStart + 2]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
MontgomeryDouble_2_run(mySubcomponents[cmp_index_ref],ctx);

}
}
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[1]); // line circom 142
{
uint cmp_index_ref = ((1 * Fr_toInt(&expaux[0])) + 15);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[1]); // line circom 142
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&expaux[0])) + 1)]].signalStart + 3]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
MontgomeryDouble_2_run(mySubcomponents[cmp_index_ref],ctx);

}
}
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[1]); // line circom 143
{
uint cmp_index_ref = ((1 * Fr_toInt(&expaux[0])) + 28);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[1]); // line circom 143
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&expaux[0])) + 15)]].signalStart + 0]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
MontgomeryDouble_2_run(mySubcomponents[cmp_index_ref],ctx);

}
}
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[1]); // line circom 144
{
uint cmp_index_ref = ((1 * Fr_toInt(&expaux[0])) + 28);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[1]); // line circom 144
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&expaux[0])) + 15)]].signalStart + 1]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
MontgomeryDouble_2_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = ((1 * Fr_toInt(&lvar[1])) + 1);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 8];
// load src
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[1]); // line circom 146
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&expaux[0])) + 28)]].signalStart + 0]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
Window4_4_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = ((1 * Fr_toInt(&lvar[1])) + 1);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 9];
// load src
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[1]); // line circom 147
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&expaux[0])) + 28)]].signalStart + 1]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
Window4_4_run(mySubcomponents[cmp_index_ref],ctx);

}
}
Fr_eq(&expaux[0],&lvar[1],&circuitConstants[1]); // line circom 150
if(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = 41;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[1]].signalStart + 0]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
MontgomeryAdd_3_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 41;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[1]].signalStart + 1]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
MontgomeryAdd_3_run(mySubcomponents[cmp_index_ref],ctx);

}
}
}else{
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[1]); // line circom 154
{
uint cmp_index_ref = ((1 * Fr_toInt(&expaux[0])) + 41);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[2]); // line circom 154
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&expaux[0])) + 41)]].signalStart + 0]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
MontgomeryAdd_3_run(mySubcomponents[cmp_index_ref],ctx);

}
}
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[1]); // line circom 155
{
uint cmp_index_ref = ((1 * Fr_toInt(&expaux[0])) + 41);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[2]); // line circom 155
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&expaux[0])) + 41)]].signalStart + 1]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
MontgomeryAdd_3_run(mySubcomponents[cmp_index_ref],ctx);

}
}
}
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[1]); // line circom 157
{
uint cmp_index_ref = ((1 * Fr_toInt(&expaux[0])) + 41);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 4];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&lvar[1])) + 1)]].signalStart + 0]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
MontgomeryAdd_3_run(mySubcomponents[cmp_index_ref],ctx);

}
}
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[1]); // line circom 158
{
uint cmp_index_ref = ((1 * Fr_toInt(&expaux[0])) + 41);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 5];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&lvar[1])) + 1)]].signalStart + 1]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
MontgomeryAdd_3_run(mySubcomponents[cmp_index_ref],ctx);

}
}
}
{
PFrElement aux_dest = &lvar[1];
// load src
Fr_add(&expaux[0],&lvar[1],&circuitConstants[1]); // line circom 130
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[1],&circuitConstants[42]); // line circom 130
}
{
uint cmp_index_ref = 54;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[53]].signalStart + 0]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 54;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[53]].signalStart + 1]);
}
// need to run sub component
assert(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter));
Montgomery2Edwards_5_run(mySubcomponents[cmp_index_ref],ctx);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 0];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[54]].signalStart + 0]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 1];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[54]].signalStart + 1]);
}
}

void Pedersen_11_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 11;
ctx->componentMemory[coffset].templateName = "Pedersen";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 256;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[3];
}

void Pedersen_11_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[5];
FrElement lvar[46];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[44]);
}
{
uint aux_create = 0;
int aux_cmp_num = 1+ctx_index+1;
uint csoffset = mySignalStart+268;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "segments[0]";
mySubcomponents[aux_create+i] = aux_cmp_num;
Segment_6_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
csoffset += 0 ;
aux_cmp_num += 0;
}
}
{
uint aux_create = 1;
int aux_cmp_num = 601+ctx_index+1;
uint csoffset = mySignalStart+6211;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "segments[1]";
mySubcomponents[aux_create+i] = aux_cmp_num;
Segment_10_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
csoffset += 0 ;
aux_cmp_num += 0;
}
}
{
uint aux_create = 2;
int aux_cmp_num = 0+ctx_index+1;
uint csoffset = mySignalStart+258;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "adders";
mySubcomponents[aux_create+i] = aux_cmp_num;
BabyAdd_8_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
csoffset += 10 ;
aux_cmp_num += 1;
}
}
{
PFrElement aux_dest = &lvar[21];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[18]);
}
{
PFrElement aux_dest = &lvar[22];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[19]);
}
{
PFrElement aux_dest = &lvar[23];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[20]);
}
{
PFrElement aux_dest = &lvar[24];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[21]);
}
{
PFrElement aux_dest = &lvar[25];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[22]);
}
{
PFrElement aux_dest = &lvar[26];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[23]);
}
{
PFrElement aux_dest = &lvar[27];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[24]);
}
{
PFrElement aux_dest = &lvar[28];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[25]);
}
{
PFrElement aux_dest = &lvar[29];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[26]);
}
{
PFrElement aux_dest = &lvar[30];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[27]);
}
{
PFrElement aux_dest = &lvar[31];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[28]);
}
{
PFrElement aux_dest = &lvar[32];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[29]);
}
{
PFrElement aux_dest = &lvar[33];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[30]);
}
{
PFrElement aux_dest = &lvar[34];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[31]);
}
{
PFrElement aux_dest = &lvar[35];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[32]);
}
{
PFrElement aux_dest = &lvar[36];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[33]);
}
{
PFrElement aux_dest = &lvar[37];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[34]);
}
{
PFrElement aux_dest = &lvar[38];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[35]);
}
{
PFrElement aux_dest = &lvar[39];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[36]);
}
{
PFrElement aux_dest = &lvar[40];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[37]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copyn(aux_dest,&lvar[21],2);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copyn(aux_dest,&lvar[23],2);
}
{
PFrElement aux_dest = &lvar[5];
// load src
// end load src
Fr_copyn(aux_dest,&lvar[25],2);
}
{
PFrElement aux_dest = &lvar[7];
// load src
// end load src
Fr_copyn(aux_dest,&lvar[27],2);
}
{
PFrElement aux_dest = &lvar[9];
// load src
// end load src
Fr_copyn(aux_dest,&lvar[29],2);
}
{
PFrElement aux_dest = &lvar[11];
// load src
// end load src
Fr_copyn(aux_dest,&lvar[31],2);
}
{
PFrElement aux_dest = &lvar[13];
// load src
// end load src
Fr_copyn(aux_dest,&lvar[33],2);
}
{
PFrElement aux_dest = &lvar[15];
// load src
// end load src
Fr_copyn(aux_dest,&lvar[35],2);
}
{
PFrElement aux_dest = &lvar[17];
// load src
// end load src
Fr_copyn(aux_dest,&lvar[37],2);
}
{
PFrElement aux_dest = &lvar[19];
// load src
// end load src
Fr_copyn(aux_dest,&lvar[39],2);
}
{
PFrElement aux_dest = &lvar[41];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[2]);
}
{
PFrElement aux_dest = &lvar[42];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[42],&circuitConstants[2]); // line circom 202
while(Fr_isTrue(&expaux[0])){
Fr_eq(&expaux[0],&lvar[42],&circuitConstants[1]); // line circom 203
if(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[44];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[45]);
}
}else{
{
PFrElement aux_dest = &lvar[44];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[41]);
}
}
{
PFrElement aux_dest = &lvar[45];
// load src
Fr_sub(&expaux[2],&lvar[44],&circuitConstants[1]); // line circom 204
Fr_idiv(&expaux[1],&expaux[2],&circuitConstants[6]); // line circom 204
Fr_add(&expaux[0],&expaux[1],&circuitConstants[1]); // line circom 204
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
uint cmp_index_ref = ((1 * Fr_toInt(&lvar[42])) + 0);
{
uint map_index_aux[1];
map_index_aux[0]=0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ctx->templateInsId2IOSignalInfo[ctx->componentMemory[mySubcomponents[cmp_index_ref]].templateId].defs[2].offset+map_index_aux[0]];
// load src
// end load src
Fr_copy(aux_dest,&lvar[(((2 * Fr_toInt(&lvar[42])) + 0) + 1)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
(*_functionTable[ctx->componentMemory[mySubcomponents[cmp_index_ref]].templateId])(mySubcomponents[cmp_index_ref],ctx);

}
}
}
{
uint cmp_index_ref = ((1 * Fr_toInt(&lvar[42])) + 0);
{
uint map_index_aux[1];
map_index_aux[0]=1;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ctx->templateInsId2IOSignalInfo[ctx->componentMemory[mySubcomponents[cmp_index_ref]].templateId].defs[2].offset+map_index_aux[0]];
// load src
// end load src
Fr_copy(aux_dest,&lvar[(((2 * Fr_toInt(&lvar[42])) + 1) + 1)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
(*_functionTable[ctx->componentMemory[mySubcomponents[cmp_index_ref]].templateId])(mySubcomponents[cmp_index_ref],ctx);

}
}
}
{
PFrElement aux_dest = &lvar[43];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[43],&lvar[44]); // line circom 208
while(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = ((1 * Fr_toInt(&lvar[42])) + 0);
{
uint map_index_aux[1];
map_index_aux[0]=Fr_toInt(&lvar[43]);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ctx->templateInsId2IOSignalInfo[ctx->componentMemory[mySubcomponents[cmp_index_ref]].templateId].defs[1].offset+map_index_aux[0]];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * ((Fr_toInt(&lvar[42]) * 200) + Fr_toInt(&lvar[43]))) + 2)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
(*_functionTable[ctx->componentMemory[mySubcomponents[cmp_index_ref]].templateId])(mySubcomponents[cmp_index_ref],ctx);

}
}
}
{
PFrElement aux_dest = &lvar[43];
// load src
Fr_add(&expaux[0],&lvar[43],&circuitConstants[1]); // line circom 208
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[43],&lvar[44]); // line circom 208
}
{
PFrElement aux_dest = &lvar[43];
// load src
// end load src
Fr_copy(aux_dest,&lvar[44]);
}
{
PFrElement aux_dest = &lvar[42];
// load src
Fr_add(&expaux[0],&lvar[42],&circuitConstants[1]); // line circom 202
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[42],&circuitConstants[2]); // line circom 202
}
{
PFrElement aux_dest = &lvar[42];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[42],&circuitConstants[1]); // line circom 219
while(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = 2;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[0]].signalStart + ctx->templateInsId2IOSignalInfo[ctx->componentMemory[mySubcomponents[0]].templateId].defs[0].offset+0]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
BabyAdd_8_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 2;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[0]].signalStart + ctx->templateInsId2IOSignalInfo[ctx->componentMemory[mySubcomponents[0]].templateId].defs[0].offset+1]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
BabyAdd_8_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 2;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 4];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[1]].signalStart + ctx->templateInsId2IOSignalInfo[ctx->componentMemory[mySubcomponents[1]].templateId].defs[0].offset+0]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
BabyAdd_8_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 2;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 5];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[1]].signalStart + ctx->templateInsId2IOSignalInfo[ctx->componentMemory[mySubcomponents[1]].templateId].defs[0].offset+1]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
BabyAdd_8_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
PFrElement aux_dest = &lvar[42];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[1]);
}
Fr_lt(&expaux[0],&lvar[42],&circuitConstants[1]); // line circom 219
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 0];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[2]].signalStart + 0]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 1];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[2]].signalStart + 1]);
}
}

void CommitmentHasher_12_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 12;
ctx->componentMemory[coffset].templateName = "CommitmentHasher";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 512;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[2];
}

void CommitmentHasher_12_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[3];
FrElement lvar[1];
uint sub_component_aux;
{
uint aux_create = 0;
int aux_cmp_num = 0+ctx_index+1;
uint csoffset = mySignalStart+514;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "cHasher";
mySubcomponents[aux_create+i] = aux_cmp_num;
Pedersen_9_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
csoffset += 15745 ;
aux_cmp_num += 1539;
}
}
{
uint aux_create = 1;
int aux_cmp_num = 1539+ctx_index+1;
uint csoffset = mySignalStart+16259;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "nHasher";
mySubcomponents[aux_create+i] = aux_cmp_num;
Pedersen_11_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
csoffset += 7870 ;
aux_cmp_num += 770;
}
}
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[0],&circuitConstants[44]); // line circom 15
while(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * Fr_toInt(&lvar[0])) + 2)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[0])) + 258)]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * (Fr_toInt(&lvar[0]) + 256)) + 2)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[0])) + 2)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
Pedersen_9_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 1;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * Fr_toInt(&lvar[0])) + 2)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[0])) + 258)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
Pedersen_11_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
PFrElement aux_dest = &lvar[0];
// load src
Fr_add(&expaux[0],&lvar[0],&circuitConstants[1]); // line circom 15
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[0],&circuitConstants[44]); // line circom 15
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 0];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[0]].signalStart + 0]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 1];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[1]].signalStart + 0]);
}
}

void run(Circom_CalcWit* ctx){
CommitmentHasher_12_create(1,0,ctx,"main",0);
CommitmentHasher_12_run(0,ctx);
}

