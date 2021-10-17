#pragma once
#include <iostream>
#include <windows.h>
using namespace std;


void fixConsoleWindow();

void gotoXY(int x, int y);

void textcolor(int x);

void ShowCur(bool CursorVisibility);

void SetWindowSize(SHORT width, SHORT height);


void drawdino1(int x, int y);
void drawdino2(int x, int y);
void drawbear1(int x, int y);
void drawbear2(int x, int y);
void drawrabbitthin1(int x, int y);
void drawrabbitthin2(int x, int y);
void drawrabitfat1(int x, int y);
void drawrabitfat2(int x, int y);