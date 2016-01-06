//
//  luac++.h
//  luac++jiaohu
//
//  Created by student on 15/12/31.
//  Copyright (c) 2015年 student. All rights reserved.
//

#ifndef __luac__jiaohu__luac____
#define __luac__jiaohu__luac____

#include <stdio.h>
#include "cocos2d.h"
using namespace cocos2d{
    class Hello:public cocos2d::Ref{
    public:
        Hello(){};
        ~Hello(){};
        bool init(){return true;};
        static cocos2d::Hello* create()
        {
            Hello *h = new Hello();
            if(h && h->init()){
                h->autorelease();
                return h;
            }
            return NULL;
        };
        void myprint(){log("Hello Hello");};
    };
}

#endif /* defined(__luac__jiaohu__luac____) */
