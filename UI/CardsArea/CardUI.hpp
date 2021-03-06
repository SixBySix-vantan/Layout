//
//  CardUI.hpp
//  6x6
//
//  Created by 辰巳優太 on 2016/06/08.
//
//

#ifndef CardUI_hpp
#define CardUI_hpp

#include "cocos2d.h"
using namespace cocos2d ;
using namespace std ;


// ===================================================================================================================
// カード表示
// デッキや手札を表示するクラス
// カードをクリックした時に呼ばれる関数はこのクラスに実装する
// このクラスを継承して デッキ、手札、墓地 の表示クラスを作る
// ===================================================================================================================
class CCardUI : public Sprite {
private:
    // 枚数や数値などのラベル
    Label* m_pLabel = NULL ;
    
public:
    // 初期化
    bool init() override ;
    
protected:
    /**
     @desc  タッチイベント設定
     */
    void settingTouchEvent() ;
    
    /**
     @desc  タッチされた時の処理の追加
     */
    //virtual void addOnTouchBegan( Touch*, Event* ) = 0 ;
};


// ===================================================================================================================
// デッキ表示
// CCardUI クラスを継承したデッキとその枚数を表示するクラス
// ===================================================================================================================
class CDeckUI : public CCardUI {
public:
    // 初期化
    bool init() override ;
    
    CREATE_FUNC( CDeckUI ) ;
    
protected:
    /**
     @desc  タッチされた時の処理
     */
    virtual void onTouchBegan( Touch*, Event* ) ;
    
};


// ===================================================================================================================
// 手札表示
// CCardUI クラスを継承した手札を表示するクラス
// ===================================================================================================================
class CHandUI : public CCardUI {
public:
    // 初期化
    bool init() override ;
    
    CREATE_FUNC( CHandUI ) ;
    
    
    
    
};


// ===================================================================================================================
// 墓地表示
// CCardUI クラスを継承した墓地とその枚数を表示するクラス
// ===================================================================================================================
class CCemeteryUI : public CCardUI {
public:
    // 初期化
    bool init() override ;
    
    CREATE_FUNC( CCemeteryUI ) ;
    
};



#endif /* CardsUI_hpp */
