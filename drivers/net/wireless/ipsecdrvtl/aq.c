/*
   'src_compress_LZS_pgpCompLZS.c' Obfuscated by COBF (Version 1.06 2006-01-07 by BB) at Mon Jun 10 09:48:00 2013
*/
#include"cobf.h"
#ifdef _WIN32
#if defined( UNDER_CE) && defined( bb344) || ! defined( bb338)
#define bb340 1
#define bb336 1
#else
#define bb351 bb357
#define bb330 1
#define bb352 1
#endif
#define bb353 1
#include"uncobf.h"
#include<ndis.h>
#include"cobf.h"
#ifdef UNDER_CE
#include"uncobf.h"
#include<ndiswan.h>
#include"cobf.h"
#endif
#include"uncobf.h"
#include<stdio.h>
#include<basetsd.h>
#include"cobf.h"
bba bbs bbl bbf, *bb1;bba bbs bbe bbq, *bb94;bba bb135 bb124, *bb337;
bba bbs bbl bb39, *bb72;bba bbs bb135 bbk, *bb59;bba bbe bbu, *bb133;
bba bbh bbf*bb89;
#ifdef bb308
bba bbd bb60, *bb122;
#endif
#else
#include"uncobf.h"
#include<linux/module.h>
#include<linux/ctype.h>
#include<linux/time.h>
#include<linux/slab.h>
#include"cobf.h"
#ifndef bb116
#define bb116
#ifdef _WIN32
#include"uncobf.h"
#include<wtypes.h>
#include"cobf.h"
#else
#ifdef bb117
#include"uncobf.h"
#include<linux/types.h>
#include"cobf.h"
#else
#include"uncobf.h"
#include<stddef.h>
#include<sys/types.h>
#include"cobf.h"
#endif
#endif
#ifdef _WIN32
bba bb111 bb256;
#else
bba bbe bbu, *bb133, *bb279;
#define bb201 1
#define bb202 0
bba bb284 bb227, *bb217, *bb229;bba bbe bb263, *bb250, *bb287;bba bbs
bbq, *bb94, *bb289;bba bb6 bb223, *bb285;bba bbs bb6 bb214, *bb259;
bba bb6 bb118, *bb238;bba bbs bb6 bb64, *bb241;bba bb64 bb258, *bb228
;bba bb64 bb276, *bb255;bba bb118 bb111, *bb249;bba bb290 bb264;bba
bb208 bb124;bba bb271 bb83;bba bb115 bb114;bba bb115 bb274;
#ifdef bb226
bba bb235 bb39, *bb72;bba bb254 bbk, *bb59;bba bb248 bbd, *bb29;bba
bb270 bb56, *bb113;
#else
bba bb246 bb39, *bb72;bba bb257 bbk, *bb59;bba bb278 bbd, *bb29;bba
bb206 bb56, *bb113;
#endif
bba bb39 bbf, *bb1, *bb224;bba bbk bb243, *bb209, *bb221;bba bbk bb275
, *bb210, *bb245;bba bbd bb60, *bb122, *bb252;bba bb83 bb37, *bb267, *
bb240;bba bbd bb234, *bb211, *bb222;bba bb114 bb251, *bb269, *bb231;
bba bb56 bb225, *bb280, *bb273;
#define bb141 bbb
bba bbb*bb212, *bb77;bba bbh bbb*bb230;bba bbl bb207;bba bbl*bb232;
bba bbh bbl*bb82;
#if defined( bb117)
bba bbe bb112;
#endif
bba bb112 bb19;bba bb19*bb233;bba bbh bb19*bb188;
#if defined( bb283) || defined( bb236)
bba bb19 bb36;bba bb19 bb120;
#else
bba bbl bb36;bba bbs bbl bb120;
#endif
bba bbh bb36*bb262;bba bb36*bb268;bba bb60 bb266, *bb216;bba bbb*
bb107;bba bb107*bb237;
#define bb215( bb35) bbi bb35##__ { bbe bb219; }; bba bbi bb35##__  * \
 bb35
bba bbi{bb37 bb190,bb265,bb239,bb244;}bb272, *bb281, *bb261;bba bbi{
bb37 bb8,bb193;}bb292, *bb242, *bb277;bba bbi{bb37 bb218,bb247;}bb220
, *bb213, *bb260;
#endif
bba bbh bbf*bb89;
#endif
bba bbf bb101;
#define IN
#define OUT
#ifdef _DEBUG
#define bb146( bbc) bb32( bbc)
#else
#define bb146( bbc) ( bbb)( bbc)
#endif
bba bbe bb161, *bb173;
#define bb288 0
#define bb312 1
#define bb296 2
#define bb323 3
#define bb343 4
bba bbe bb349;bba bbb*bb121;
#endif
#ifdef _WIN32
#ifndef UNDER_CE
#define bb31 bb341
#define bb43 bb346
bba bbs bb6 bb31;bba bb6 bb43;
#endif
#else
#endif
#ifdef _WIN32
bbb*bb128(bb31 bb47);bbb bb109(bbb* );bbb*bb137(bb31 bb159,bb31 bb47);
#else
#define bb128( bbc) bb147(1, bbc, bb140)
#define bb109( bbc) bb331( bbc)
#define bb137( bbc, bbn) bb147( bbc, bbn, bb140)
#endif
#ifdef _WIN32
#define bb32( bbc) bb339( bbc)
#else
#ifdef _DEBUG
bbe bb144(bbh bbl*bb95,bbh bbl*bb25,bbs bb286);
#define bb32( bbc) ( bbb)(( bbc) || ( bb144(# bbc, __FILE__, __LINE__ \
)))
#else
#define bb32( bbc) (( bbb)0)
#endif
#endif
bb43 bb302(bb43*bb324);
#ifndef _WIN32
bbe bb328(bbh bbl*bbg);bbe bb321(bbh bbl*bb20,...);
#endif
#ifdef _WIN32
bba bb342 bb96;
#define bb139( bbc) bb354( bbc)
#define bb142( bbc) bb329( bbc)
#define bb134( bbc) bb348( bbc)
#define bb132( bbc) bb332( bbc)
#else
bba bb334 bb96;
#define bb139( bbc) ( bbb)(  *  bbc = bb356( bbc))
#define bb142( bbc) (( bbb)0)
#define bb134( bbc) bb333( bbc)
#define bb132( bbc) bb358( bbc)
#endif
bba bbi bb991*bb1015;bba bbi bb1028*bb1029;bba bbi bb993*bb1023;bba
bbi bb1025*bb1011;bba bbi bb1017*bb1024;bba bbi bb1014*bb987;bba bb10
{bb554=0 ,bb582=1 ,bb580=2 ,bb827=3 ,bb587=4 ,bb561=5 ,bb575=6 ,bb562=7 ,
bb579=9 ,}bb422;bba bb10{bb600=0 ,bb992,bb615,bb1010,bb931,bb923,bb925,
bb918,bb927,bb922,bb916,}bb519;bba bb83 bb4;bb10{bb98=0 ,bb361=-12000 ,
bb345=-11999 ,bb377=-11998 ,bb674=-11997 ,bb722=-11996 ,bb738=-11995 ,
bb874=-11994 ,bb854=-11992 ,bb779=-11991 ,bb804=-11990 ,bb750=-11989 ,
bb838=-11988 ,bb639=-11987 ,bb683=-11986 ,bb763=-11985 ,bb848=-11984 ,
bb711=-11983 ,bb622=-11982 ,bb773=-11981 ,bb895=-11980 ,bb684=-11979 ,
bb714=-11978 ,bb844=-11977 ,bb586=-11976 ,bb897=-11975 ,bb637=-11960 ,
bb885=-11959 ,bb876=-11500 ,bb723=-11499 ,bb670=-11498 ,bb810=-11497 ,
bb696=-11496 ,bb755=-11495 ,bb720=-11494 ,bb783=-11493 ,bb668=-11492 ,
bb632=-11491 ,bb635=-11490 ,bb676=-11489 ,bb680=-11488 ,bb700=-11487 ,
bb840=-11486 ,bb889=-11485 ,bb649=-11484 ,bb900=-11483 ,bb716=-11482 ,
bb634=-11481 ,bb708=-11480 ,bb768=-11479 ,bb648=-11478 ,bb730=-11477 ,
bb774=-11476 ,bb769=-11475 ,bb866=-11474 ,bb775=-11473 ,bb841=-11472 ,
bb757=-11460 ,bb843=-11450 ,bb751=-11449 ,bb717=-11448 ,bb726=-11447 ,
bb864=-11446 ,bb629=-11445 ,bb826=-11444 ,bb734=-11443 ,bb713=-11440 ,
bb789=-11439 ,bb791=-11438 ,bb697=-11437 ,bb707=-11436 ,bb673=-11435 ,
bb630=-11420 ,bb531=-11419 ,bb567=-11418 ,bb693=-11417 ,bb631=-11416 ,
bb792=-11415 ,bb808=-11414 ,bb748=-11413 ,bb633=-11412 ,bb830=-11411 ,
bb681=-11410 ,bb781=-11409 ,bb715=-11408 ,bb905=-11407 ,bb873=-11406 ,
bb814=-11405 ,bb894=-11404 ,bb654=-11403 ,bb770=-11402 ,bb846=-11401 ,
bb642=-11400 ,bb879=-11399 ,bb855=-11398 ,bb659=-11397 ,bb687=-11396 ,
bb898=-11395 ,bb705=-11394 ,bb860=-11393 ,bb811=-11392 ,bb878=-11391 ,
bb888=-11390 ,bb743=-11389 ,bb790=-11388 ,bb813=-11387 ,bb903=-11386 ,
bb758=-11385 ,bb706=-11384 ,bb899=-11383 ,bb645=-11382 ,bb908=-11381 ,
bb640=-11380 ,bb795=-11379 ,bb623=-11378 ,bb760=-11377 ,bb815=-11376 ,
bb870=-11375 ,bb788=-11374 ,bb816=-11373 ,bb688=-11372 ,bb865=-11371 ,
bb812=-11370 ,bb620=-11369 ,bb712=-11368 ,bb765=-11367 ,bb858=-11366 ,
bb710=-11365 ,bb636=-11364 ,bb653=-11363 ,bb387=-11350 ,bb884=bb387,bb721
=-11349 ,bb662=-11348 ,bb835=-11347 ,bb646=-11346 ,bb651=-11345 ,bb877=-
11344 ,bb818=-11343 ,bb754=-11342 ,bb824=-11341 ,bb764=-11340 ,bb902=-
11339 ,bb397=-11338 ,bb724=-11337 ,bb701=bb397,bb819=-11330 ,bb619=-11329
,bb799=-11328 ,bb801=-11327 ,bb731=-11326 ,bb762=-11325 ,bb772=-11324 ,
bb672=-11320 ,bb638=-11319 ,bb678=-11318 ,bb752=-11317 ,bb644=-11316 ,
bb667=-11315 ,bb831=-11314 ,bb736=-11313 ,bb776=-11312 ,bb881=-11300 ,
bb787=-11299 ,bb749=-11298 ,bb709=-11297 ,bb704=-11296 ,bb867=-11295 ,
bb892=-11294 ,bb656=-11293 ,bb890=-11292 ,bb906=-11291 ,bb618=-11290 ,
bb727=-11289 ,bb809=-11288 ,bb725=-11287 ,bb785=-11286 ,bb616=-11285 ,
bb806=-11284 ,bb850=-11283 ,bb728=-11282 ,bb679=-11281 ,bb807=-11280 ,
bb685=-11279 ,bb753=-11250 ,bb832=-11249 ,bb663=-11248 ,bb677=-11247 ,
bb641=-11246 ,bb650=-11245 ,bb719=-11244 ,bb761=-11243 ,bb621=-11242 ,
bb820=-11240 ,bb655=-11239 ,bb745=-11238 ,bb825=-11237 ,bb702=-11150 ,
bb703=-11100 ,bb836=-11099 ,bb786=-11098 ,bb871=-11097 ,bb735=-11096 ,
bb802=-11095 ,bb643=-11094 ,bb617=-11093 ,bb834=-11092 ,bb686=-11091 ,
bb805=-11090 ,bb628=-11089 ,bb868=-11088 ,bb661=-11087 ,bb901=-11086 ,
bb767=-11085 ,bb793=-11050 ,bb759=-11049 ,bb695=-10999 ,bb771=-10998 ,
bb658=-10997 ,bb669=-10996 ,bb904=-10995 ,bb893=-10994 ,bb699=-10993 ,
bb817=-10992 ,bb780=-10991 ,bb627=-10990 ,bb626=-10989 ,bb822=-10988 ,
bb694=-10979 ,bb660=-10978 ,bb880=-10977 ,bb875=-10976 ,bb744=-10975 ,
bb742=-10974 ,};bb10{bb558=1 ,};bbb*bb499(bbd bb1201,bbd bb374);bb4
bb461(bbb*bb972);bba bbi bb1987 bb1972, *bb382;bba bb10{bb1994=0 ,
bb1754=1 ,bb1768=2 }bb842;bb4 bb1813(bb842 bb1872,bb382*bb360);bb4
bb1949(bb382 bb360,bbf*bb437,bbd bb418,bbf*bb309,bbd bb293,bbd*bb440,
bbd*bb305);bb4 bb1942(bb382 bb360,bbf*bb309,bbd bb293,bbd*bb305,bbu*
bb975);bb4 bb1950(bb382 bb360,bbf*bb437,bbd bb418,bbf*bb309,bbd bb293
,bbd*bb440,bbd*bb305,bbu*bb962);bb4 bb1822(bb382 bb360);bb4 bb2204(
bb77*bb162);bb4 bb2294(bb77 bb162,bbf*bb437,bbd bb418,bbf*bb309,bbd
bb293,bbd*bb440,bbd*bb305);bb4 bb2289(bb77 bb162,bbf*bb309,bbd bb293,
bbd*bb305,bbu*bb975);bb4 bb2243(bb77*bb162);bb4 bb2302(bb77*bb162);
bb4 bb2203(bb77 bb162,bbf*bb437,bbd bb418,bbf*bb309,bbd bb293,bbd*
bb440,bbd*bb305,bbu*bb962);bb4 bb2284(bb77*bb162);bba bbi bb1864
bb1864;bba bbi bb1864*bb484;bbd bb2193(bbb);bbb bb2135(bb484 bb0,bbb*
bb1342);bbk bb2173(bb484 bb0,bbf* *bb1739,bbf* *bb1733,bbd*bb915,bbd*
bb598,bbb*bb1342,bbk bb374,bbk bb2158);bbk bb2293(bb484 bb0,bbf* *
bb1739,bbf* *bb1733,bbd*bb915,bbd*bb598,bbb*bb1342,bbk bb374);bba bbi
{bb484 bb0;bbf*bb1308;}bb2312, *bb1155;bb4 bb2204(bb77*bb162){bb1155
bb432;bb4 bb18=bb98;bbm(!bb162)bb2 bb361; *bb162=bb91;bb432=(bb1155)bb499
(bb12(bb2312),bb558);bbm(!bb432)bb2 bb345;bb432->bb0=(bb484)bb499(
bb2193(),bb558);bbm(!bb432->bb0){bb461(bb432);bb2 bb345;}bb432->
bb1308=(bbf* )bb499(24760 ,bb558);bbm(!bb432->bb1308){bb461(bb432->bb0
);bb461(bb432);bb2 bb345;}bb2135(bb432->bb0,bb432->bb1308); *bb162=
bb432;bb2 bb18;}bb4 bb2294(bb77 bb162,bbf*bb437,bbd bb418,bbf*bb309,
bbd bb293,bbd*bb440,bbd*bb305){bb1155 bb432;bbk bb1769;bbd bb915;bbd
bb598;bbf*bb1826;bbk bb2229=2 <<3 ;bbk bb2264=200 ;bb4 bb18=bb98;bb432=(
bb1155)bb162;bbm(bb293<=15 )bb2 bb377;bb915=bb418;bb598=bb293;bb1826=
bb309;bb1769=bb2173(bb432->bb0,&bb437,&bb1826,&bb915,&bb598,bb432->
bb1308,bb2229,bb2264);bbm(bb1769==0 )bb18=bb586;bb54{ *bb440=bb418-
bb915; *bb305=bb293-bb598;}bb2 bb18;}bb4 bb2289(bb77 bb162,bbf*bb309,
bbd bb293,bbd*bb305,bbu*bb975){bb1155 bb432;bbk bb1769;bbd bb915;bbd
bb598;bbf*bb1826;bbf*bb2468=bb91;bbk bb2229=2 <<3 ;bbk bb2264=200 ;bb4
bb18=bb98;bb432=(bb1155)bb162;bbm(bb293<=15 )bb2 bb377;bb915=0 ;bb598=
bb293;bb1826=bb309;bb1769=bb2173(bb432->bb0,&bb2468,&bb1826,&bb915,&
bb598,bb432->bb1308,(bbk)(0x01 |bb2229),bb2264); *bb305=bb293-bb598;
bbm(bb1769&2 ) *bb975=1 ;bb2 bb18;}bb4 bb2243(bb77*bb162){bb4 bb18=bb98
;bbm(!bb162)bb2 bb361;bb461(((bb1155) *bb162)->bb1308);bb461(((bb1155
) *bb162)->bb0);bb461( *bb162); *bb162=bb91;bb2 bb18;}bb4 bb2302(bb77
 *bb162){bb1155 bb432;bb4 bb18=bb98;bbm(!bb162)bb2 bb361; *bb162=bb91
;bb432=(bb1155)bb499(bb12(bb2312),bb558);bbm(!bb432)bb2 bb345;bb432->
bb0=(bb484)bb499(bb2193(),bb558);bbm(!bb432->bb0){bb461(bb432);bb2
bb345;}bb432->bb1308=(bbf* )bb499(24760 ,bb558);bbm(!bb432->bb1308){
bb461(bb432->bb0);bb461(bb432);bb2 bb345;}bb2135(bb432->bb0,bb432->
bb1308); *bb162=bb432;bb2 bb18;}bb4 bb2203(bb77 bb162,bbf*bb437,bbd
bb418,bbf*bb309,bbd bb293,bbd*bb440,bbd*bb305,bbu*bb962){bb1155 bb432
;bbk bb1769;bbd bb915;bbd bb598;bbf*bb1826;bb4 bb18=bb98;bb432=(
bb1155)bb162;bb915=bb418;bb598=bb293;bb1826=bb309;bb1769=bb2293(bb432
->bb0,&bb437,&bb1826,&bb915,&bb598,bb432->bb1308,0 ); *bb440=bb418-
bb915; *bb305=bb293-bb598;bbm((bb1769&4 )&&!(bb1769&2 )) *bb962=1 ;bb2
bb18;}bb4 bb2284(bb77*bb162){bb4 bb18=bb98;bbm(!bb162)bb2 bb361;bb461
(((bb1155) *bb162)->bb1308);bb461(((bb1155) *bb162)->bb0);bb461( *
bb162); *bb162=bb91;bb2 bb18;}
