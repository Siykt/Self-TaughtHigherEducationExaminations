# C++ 概述

1. 简要介绍 C++ 语言, 详细说明如何搭建 C++ 程序运行环境.

## VSCode 搭建 C++ 程序运行环境

### 第一步安装 C/C++ for Visual Studio Code 插件

1. 按下 Ctrl+Shift+X
2. 在搜索框中输入 C/C++
3. 安装第一个插件

### 安装 GDB

#### GCC 环境安装

1. 打开 `MinGW`
2. 选中左栏的 `Basic Setup`,然后选中 `mingw32-gcc-g++-bin`, 右键选择 `Mark for installation`
3. 选中 `All packages`,
   找到 `mingw32-gdb-bin`, `mingw32-gdb-doc`, `mingw32-gdb-info`, `mingw32-gdb-lang`, `mingw32-gdb-lic`, `mingw32-gdb-man`, 右键选择 `Mark for installation`
4. 点击左上角的 `installation`, 然后点击 `Apply Changes`
5. 点击 `Apply`, 等待安装完成, 点击 `close`

> MinGW 配置较为繁琐，可以考虑使用 MinGW64，MinGW64 安装后就不需上方的配置，一路点击下一步即可。（但是还是要配置环境变量

### 添加环境变量

1. 进入设置,点击系统,然后选择关于,然后点击右侧系统信息
2. 在弹出的系统信息中,选中左栏高级系统设置,然后选中环境变量
3. 在系统变量一栏中找到 Path,双击,然后新建一个 C:\MinGW\bin 的变量
4. 一路确定,直到关闭所有选卡
5. 重启电脑

### 配置 VSCode

新建一个 cpp 文件, 写上以下测试代码:

```cpp
#include <iostream>
using namespace std;

int main()
{
  cout << "HelloWorld" << endl;

  system("pause");
  return 0;
}
```

Ctrl+S 保存,然后按 F5,VSCode 会在上方弹出选择环境,选择 C++(GDB/LLDB), 然后将以下代码覆盖至 launch.json, 注意 `miDebuggerPath` 路径要对应:

```json
{
  // Use IntelliSense to learn about possible attributes.
  // Hover to view descriptions of existing attributes.
  // For more information, visit: https://go.microsoft.com/fwlink/?linkid=830387
  "version": "0.2.0",
  "configurations": [
    {
      "name": "(gdb) Launch",
      "type": "cppdbg",
      "request": "launch",
      "program": "${fileDirname}/${fileBasenameNoExtension}.exe",
      "args": [],
      "stopAtEntry": false,
      "cwd": "${workspaceFolder}",
      "externalConsole": true,
      "MIMode": "gdb",
      "miDebuggerPath": "C:/MinGW/bin/gdb.exe",
      "setupCommands": [
        {
          "description": "Enable pretty-printing for gdb",
          "text": "-enable-pretty-printing",
          "ignoreFailures": true
        }
      ],
      "preLaunchTask": "Build"
    }
  ]
}
```

回到新建的 cpp 中,按下 F5,会显示找不到任务,点击配置任务,点击使用模板创建,然后点击带有 Other 的选项,用以下代码覆盖 tasks.json

```json
{
  "version": "2.0.0",
  "tasks": [
    {
      "label": "Build",
      "command": "g++",
      "args": ["-g", "-Wall", "-std=c++11", "-lm", "${file}", "-o", "${fileDirname}/${fileBasenameNoExtension}.exe"],
      "presentation": {
        "reveal": "always",
        "echo": false,
        "focus": true
      },
      "problemMatcher": {
        "owner": "cpp",
        "fileLocation": "absolute",
        "pattern": {
          "regexp": "^(.*):(\\d+):(\\d+):\\s+(error):\\s+(.*)$",
          "file": 1,
          "line": 2,
          "column": 3,
          "severity": 4,
          "message": 5
        }
      }
    },

    {
      "label": "Run",
      "type": "shell",
      "dependsOn": "Build",
      "command": "${fileDirname}/${fileBasenameNoExtension}.exe",
      "args": [],
      "presentation": {
        "reveal": "always",
        "focus": true
      },
      "problemMatcher": [],
      "group": {
        "kind": "test",
        "isDefault": true
      }
    }
  ]
}
```

Ctrl+S 保存, 然后回到新建的 cpp, 按下 F5, 程序就会被编译运行, 至此 GDB 调试环境便配置完成.

### 参考链接

[VSCode 配置 C/C++ GDB 调试环境[Windows]](https://blog.ixk.me/post/vscode-configuration-c-cpp-gdb-debugging-environment-windows)
