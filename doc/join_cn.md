## 如何参与本活动

参与本验证活动，取得名次能够获得丰厚大奖，[报名问卷](https://iz9a87wn37.feishu.cn/share/base/form/shrcnwpiyWaVUzyo47QdPBGy5Yd)

### 流程介绍

参与验证的流程如下图所示：

<img src="/.github/image/ov-pipline.svg" width="800px">

#### （0）在线报名

参加本活动的队伍队员数没有限制，可以是一个也可以是多个。最终奖金按队伍积分发放给队长，且在活动开放期间，队名和队长的名称会被群内公开。

#### （1）资格认证

为了对参赛队伍进行能力评估，本活动提供了数个具有已知bug的DUT让参加队伍进行验证测试，能发现其中的80%以上的bug并能进行原因分析的队伍才能获得获得参加资格。其中发现的bug数，也会变成对应的队伍积分。

#### （2）Fork仓库

Fork本仓库，然后在本地进行环境搭建，参与测试任务。

#### （3）领取任务

任务在本仓库Issue中进行描述，队长以Issue的方式在Issue下方进行报名。管理员会进行统计，然后群内发布公告。

#### （4）分解测试点与编写验证方案

测试点分解和验证方案是芯片验证过程中的重要步骤，直接影响验证结果。在本阶段，需要通过PR提交对应报告，组织方会对报告进行评审和打分。

#### （5）编写测试用例

测试用例编写，具体格式可以参考`tests`目录中的模板。测试用例需要覆盖到对应的测试点。

#### （6）编写测试代码&测试发现bug

测试过程中，发现bug后，需要对bug进行分析。

#### （7）通过Issue和PR汇报bug获得积分

可以通过PR随时进行bug提交，但是一天组织方只对一个队伍进行一次bug审查。组织方根据bug类型，等级发放对应积分。

#### （8）编写测试文档

参考模板 [todo](todo://todo) 进行对应文档编写。

#### （9）PPT在线答辩

编写PPT在线进行对整个验证任务的答辩。答辩根据给队伍的完成情况集中组织。

## 任务

### 任务1. uFTB

源代码地址: [FauFTB.sv](https://github.com/XS-MLVP/env-xs-ov-00-bpu/tree/main/rtl/uFTB)
功能描述文档：[uFTB分支预测器](https://open-verify.cc/xs-bpu/docs/modules/01_uftb/)
参考功能点文档：[uFTB功能列表](https://open-verify.cc/xs-bpu/docs/feature/01_uftbfeature/)

1. 完成对 uFTB 子预测器的代码及文档阅读，了解 uFTB 的工作原理及模块功能。明确 uFTB 使用的 FTB 项缓存的结构。
2. 根据给出的参考功能点，完善 uFTB 需要验证的功能点，并针对这些功能点分解出具体的测试点。同时解释每个测试点对验证功能点的意义。
3. 依据分解出的测试点，完成对 uFTB 的测试用例编写。测试用例需要覆盖到所有的测试点。同时，需要对测试用例进行详细的说明，包括测试用例的目的、输入、输出、预期结果及原理等。
4. 完成对 uFTB 的测试用例的代码编写，建议完成**参考模型的编写**。确保测试用例能够通过验证环境的运行。在编码的过程中，需要保证代码的质量，包括代码的可读性、可维护性、可扩展性等。
5. 完成对 uFTB 的测试用例的运行，生成测试报告。测试报告需要包括测试用例的运行结果、代码行覆盖率、功能覆盖率等信息。测试报告需要保存在 `tests/report` 目录中，可通过浏览器打开 `tests/report/uFTB-yourId.html` 查看本次测试报告内容。
6. 最终提交前，需要对测试报告进行检查，确保测试报告符合提交PR的基本要求。

### 任务2. TageSC

源代码地址: [TageSC.sv](https://github.com/XS-MLVP/env-xs-ov-00-bpu/tree/main/rtl/TageSC)
功能描述文档：[TAGE-SC 分支预测器](https://open-verify.cc/xs-bpu/docs/modules/02_tage_sc/)
参考功能点文档：[TAGE-SC 功能列表](https://open-verify.cc/xs-bpu/docs/feature/03_tagescfeature/)

1. 完成对 TageSC 子预测器的代码及文档阅读，了解 Tage 及 SC 单个模块的工作原理及功能，再了解 TageSC 整体模块的功能。明确使用的 Tage 表项及 SC 表项的结构，以及分支折叠历史的工作原理。
2. 根据给出的参考功能点，完善 Tage、SC、TageSC 需要验证的功能点，并针对这些功能点分解出具体的测试点。同时解释每个测试点对验证功能点的意义。
3. 依据分解出的测试点，完成对 TageSC 的测试用例编写。测试用例需要覆盖到所有的测试点。同时，需要对测试用例进行详细的说明，包括测试用例的目的、输入、输出、预期结果及原理等。
4. 完成对 TageSC 的测试用例的代码编写，要求完成**参考模型的编写**。确保测试用例能够通过验证环境的运行。在编码的过程中，需要保证代码的质量，包括代码的可读性、可维护性、可扩展性等。
5. 完成对 TageSC 的测试用例的运行，生成测试报告。测试报告需要包括测试用例的运行结果、代码行覆盖率、功能覆盖率等信息。测试报告需要保存在 `tests/report` 目录中，可通过浏览器打开 `tests/report/TageSC-yourId.html` 查看本次测试报告内容。
6. 最终提交前，需要对测试报告进行检查，确保测试报告符合提交PR的基本要求。

### 任务3. FTB

源代码地址: [FTB.sv](https://github.com/XS-MLVP/env-xs-ov-00-bpu/tree/main/rtl/FTB)
功能描述文档：[FTB 分支预测器](https://open-verify.cc/xs-bpu/docs/modules/03_ftb/)
参考功能点文档：[FTB 功能列表](https://open-verify.cc/xs-bpu/docs/feature/02_ftbfeature/)

1. 完成对 FTB 子预测器的代码及文档阅读，了解 FTB 的工作原理及模块功能。明确 FTB 使用的 FTB 项缓存的结构，了解条件分支指令和间接跳转指令的不同。
2. 根据给出的参考功能点，完善 FTB 需要验证的功能点，并针对这些功能点分解出具体的测试点。同时解释每个测试点对验证功能点的意义。
3. 依据分解出的测试点，完成对 FTB 的测试用例编写。测试用例需要覆盖到所有的测试点。同时，需要对测试用例进行详细的说明，包括测试用例的目的、输入、输出、预期结果及原理等。
4. 完成对 FTB 的测试用例的代码编写，建议完成**参考模型的编写**。确保测试用例能够通过验证环境的运行。在编码的过程中，需要保证代码的质量，包括代码的可读性、可维护性、可扩展性等。
5. 完成对 FTB 的测试用例的运行，生成测试报告。测试报告需要包括测试用例的运行结果、代码行覆盖率、功能覆盖率等信息。测试报告需要保存在 `tests/report` 目录中，可通过浏览器打开 `tests/report/FTB-yourId.html` 查看本次测试报告内容。
6. 最终提交前，需要对测试报告进行检查，确保测试报告符合提交PR的基本要求。

### 任务4. ITTAGE

源代码地址: [ITTAGE.sv](https://github.com/XS-MLVP/env-xs-ov-00-bpu/tree/main/rtl/ITTAGE)
功能描述文档：[ITTAGE 分支预测器](https://open-verify.cc/xs-bpu/docs/modules/04_ittage/)
参考功能点文档：[ITTAGE 功能列表](https://open-verify.cc/xs-bpu/docs/feature/04_ittagefeature/)

1. 完成对 ITTAGE 子预测器的代码及文档阅读，了解 ITTAGE 的工作原理及模块功能。明确 ITTAGE 使用的 Tage 表项的结构，了解 ITTAGE 的预测器结构。同时了解分支折叠历史的工作原理。
2. 根据给出的参考功能点，完善 ITTAGE 需要验证的功能点，并针对这些功能点分解出具体的测试点。同时解释每个测试点对验证功能点的意义。
3. 依据分解出的测试点，完成对 ITTAGE 的测试用例编写。测试用例需要覆盖到所有的测试点。同时，需要对测试用例进行详细的说明，包括测试用例的目的、输入、输出、预期结果及原理等。
4. 完成对 ITTAGE 的测试用例的代码编写，要求完成**参考模型的编写**。确保测试用例能够通过验证环境的运行。在编码的过程中，需要保证代码的质量，包括代码的可读性、可维护性、可扩展性等。
5. 完成对 ITTAGE 的测试用例的运行，生成测试报告。测试报告需要包括测试用例的运行结果、代码行覆盖率、功能覆盖率等信息。测试报告需要保存在 `tests/report` 目录中，可通过浏览器打开 `tests/report/ITTAGE-yourId.html` 查看本次测试报告内容。
6. 最终提交前，需要对测试报告进行检查，确保测试报告符合提交PR的基本要求。


### 任务5. RAS

源代码地址: [RAS.sv](https://github.com/XS-MLVP/env-xs-ov-00-bpu/tree/main/rtl/RAS)
功能描述文档：[RAS 分支预测器](https://open-verify.cc/xs-bpu/docs/modules/05_ras/)
参考功能点文档：[RAS 功能列表](https://open-verify.cc/xs-bpu/docs/feature/05_rasfeature/)

1. 完成对 RAS 子预测器的代码及文档阅读，了解 RAS 的工作原理及模块功能。了解程序运行时栈帧的工作原理，再明确 RAS 的 RAS 栈的工作原理。最明确 RAS 的预测器如何为 call 和 ret 指令提供预测。
2. 根据给出的参考功能点，完善 RAS 需要验证的功能点，并针对这些功能点分解出具体的测试点。同时解释每个测试点对验证功能点的意义。
3. 依据分解出的测试点，完成对 RAS 的测试用例编写。测试用例需要覆盖到所有的测试点。同时，需要对测试用例进行详细的说明，包括测试用例的目的、输入、输出、预期结果及原理等。
4. 完成对 RAS 的测试用例的代码编写，要求完成**参考模型的编写**。确保测试用例能够通过验证环境的运行。在编码的过程中，需要保证代码的质量，包括代码的可读性、可维护性、可扩展性等。
5. 完成对 RAS 的测试用例的运行，生成测试报告。测试报告需要包括测试用例的运行结果、代码行覆盖率、功能覆盖率等信息。测试报告需要保存在 `tests/report` 目录中，可通过浏览器打开 `tests/report/RAS-yourId.html` 查看本次测试报告内容。
6. 最终提交前，需要对测试报告进行检查，确保测试报告符合提交PR的基本要求。

### 任务6. BPU Top

源代码地址: [Predictor.sv & Composer.sv](https://github.com/XS-MLVP/env-xs-ov-00-bpu/tree/main/rtl/common)
功能描述文档：[BPU 顶层模块](https://open-verify.cc/xs-bpu/docs/modules/00_bpu_top/)
参考功能点文档：[BPU Top 功能列表](https://open-verify.cc/xs-bpu/docs/feature/00_bpufeature/)

1. 完成对 BPU Top 子预测器的代码及文档阅读，了解 BPU Top 的工作原理及模块功能。了解 BPU Top 的预测器结构，明确 BPU Top 的预测器如何为不同类型的分支提供预测。同时了解 BPU Top 如何与外界的 FTQ 模块进行交互。
2. 根据给出的参考功能点，完善 BPU Top 需要验证的功能点，并针对这些功能点分解出具体的测试点。同时解释每个测试点对验证功能点的意义。
3. 依据分解出的测试点，完成对 BPU Top 的测试用例编写。测试用例需要覆盖到所有的测试点。同时，需要对测试用例进行详细的说明，包括测试用例的目的、输入、输出、预期结果及原理等。
4. 完成对 BPU Top 的测试用例的代码编写，要求完成**参考模型，以及FTQ模拟验证环境的编写**。确保测试用例能够通过验证环境的运行。在编码的过程中，需要保证代码的质量，包括代码的可读性、可维护性、可扩展性等。
5. 完成对 BPU Top 的测试用例的运行，生成测试报告。测试报告需要包括测试用例的运行结果、代码行覆盖率、功能覆盖率等信息。测试报告需要保存在 `tests/report` 目录中，可通过浏览器打开 `tests/report/BPU-Top-yourId.html` 查看本次测试报告内容。
6. 最终提交前，需要对测试报告进行检查，确保测试报告符合提交PR的基本要求。

## 里程碑

1. 完成功能点及测试点分解：经过`1.`的阅读工作完成学习后，进行`2.`。与我们进行沟通确认完成`2.`后才可以开始后面的工作。
2. 完成测试用例沟通：完成`3.`后，与我们进行沟通确认完成`3.`的行为符合预期及原理正确后才可以开始后面的工作。
3. 完成测试报告：经过`4.`和`5.`的过程，会生成一个测试报告。当经过不断迭代，报告最终满足PR提交基本要求后，同时我们审核通过，即认为验证任务完成。在完成迭代的过程中，如果遇到bug需要和我们进行沟通，我们会给予相应的积分。同时如果有**值得提问的问题**，可以在讨论群中进行讨论。


## PR提交基本要求

覆盖率要求：

1. 代码行覆盖率需要大于 95% ，并解释未覆盖到的代码原因。
1. 功能覆盖率必要达到 100%
1. 覆盖率有验证环境运行得到，不可对报告和生成逻辑进行修改

文档要求：

1. 对功能点进行合理的测试点分解。功能点可以自行增加，但不能对原始功能点进行删除。
1. 设计的测试用例必要覆盖所有测试点和功能点
1. 请按模板进行编写测试文档
1. 领取多个验证任务后，其验证报告需要分开写

积分获取方式：

1. 合理的测点分解、合理的验证方案、规范的验证文档
1. 验出bug并分析出bug原因，按bug确认等级获取积分
1. 修复本项目中文档，代码中出现的错误，按错误等级获取积分
1. 提交最终验证报告，按报告质量，覆盖率获得积分
1. 最终汇报得分