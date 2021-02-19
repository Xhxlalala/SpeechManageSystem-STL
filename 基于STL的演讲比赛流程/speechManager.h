#pragma once //防止头文件重复编译
#include <iostream>
using namespace std;
#include <vector>
#include <map>
#include "speaker.h"
#include <windows.h>
#include <string>
#include <deque>
#include <algorithm>
#include <functional>
#include <numeric>
#include <fstream>

//设计演讲管理类
class SpeechManager
{
public:
    //构造函数
    SpeechManager();

    //菜单功能
    void showMenu();

    //退出系统
    void exitSystem();

    //选手容器初始化
    void initSpeech();

    //创建12名选手
    void createSpeaker();

    //比赛流程控制函数
    void startSpeech();

    //抽签
    void speechDraw();

    //比赛
    void speechContest();

    //显示得分
    void showScore();

    //保存记录
    void saveRecord();

    //读取记录
    void loadRecord();

    //显示往届得分
	void showRecord();

	//清空比赛记录
	void clearRecord();

    //析构函数
    ~SpeechManager();

    //成员属性
    //第一轮选手
    vector<int>v1;

    //第一轮晋级选手
    vector<int>v2;

    //胜出前三名
    vector<int>vVictory;

    //存放编号以及对应具体选手
    map<int, Speaker>m_Speaker;

    //存放比赛轮数
    int m_Index;

    //文件为空标志
    bool fileIsEmpty;

    //往届记录
    map<int, vector<string> >m_Record;
};
