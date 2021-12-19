# design pattern

## 简介

本软件包是基于《C嵌入式变成设计模式》这本书籍，对相关模式的学习，总结，输出，可以在RT-Thread中，一键部署，测试，运行。为后来者学习嵌入式设计模式，提供一种相对快速的方式，本软件包会持续更新。

## 支持情况

| 模式类别       | 是否实现 |
| -------------- | -------- |
| 硬件代理模式   | 暂未实现 |
| 硬件适配器模式 | 暂未实现 |
| 中介者模式     | 暂未实现 |
| 观察者模式     | 已实现   |
| 去抖动模式     | 暂未实现 |
| 中断模式       | 暂未实现 |
| 轮询模式       | 暂未实现 |

## 使用说明

### 依赖

- RT-Thread 4.0.0+

### 获取软件包

使用 design-pattern软件包需要在 RT-Thread 的包管理中选中它，具体路径如下：

```
RT-Thread online packages  --->
   miscellaneous packages  --->
    a design pattern demo package.  --->
     --- a design pattern demo package.                                                                          [*]   Using observer design pattern
     	Version (latest)  --->
```

### 使用软件包

选择对应的demo，可以在qemu，或者simulator，或者开发板中运行。

#### 初始化示例

暂无

#### 注意事项

暂无

## 联系人信息

维护人:

- [chenyingchun0312](https://github.com/chenyingchun0312) 

- 主页：<https://github.com/chenyingchun0312/design_pattern>