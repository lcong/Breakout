#ifndef GAME_H
#define GAME_H


// 当前的游戏状态
enum GameState {
    KGameActive,
    kGameMenu,
    kGameWin
};


class Game
{
public:
    // 游戏状态
    GameState state_;
    bool keys_[1024];
    // 游戏分辨率
    unsigned int width_, height_;

    Game(unsigned int width, unsigned int height);
    ~Game();
    // 初始化游戏状态（加载所有的着色器/纹理/关卡）
    void Init();

    // 游戏循环

    // 处理输入
    void ProcessInput(float dt);
    // 更新游戏设置状态
    void Update(float dt);
    // 渲染
    void Render();
};

#endif