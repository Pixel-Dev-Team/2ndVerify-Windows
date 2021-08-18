# 2ndVerify-Windows

[简体中文版本](https://github.com/PixelWine/2ndVerify-Windows/blob/main/README.md)

[English Version (By Bing Microsoft Translator)](https://github.com/PixelWine/2ndVerify-Windows/blob/main/README_EN.md)

歡迎廣大貢獻者為多語言文檔提供人工翻譯！

**下面所有的說明都是針對 2ndVerify Version Windows-alpha !!! 請勿在其他OS或 2ndVerify 其他版本（有些操作可能相容）上操作!!! **

**鄭重聲明：目前開發者並未開發Linux、macOS版本，除 Windows 版本外其他所有版本均非官方版本，請在使用前考慮後果！ 具體請參考[官方版和移植版](#2ndVerify 的官方版本與移植版本)**

[TOC]

## 2ndVerify 有什麼用？ 它是怎樣運作的？

- 2ndVerify 可以幫您2次鎖定您的計算機（如果您開啟了系統盤 BitLocker，那麼是3次），保障您的數據安全
- 它通過執行 Windows 系統內置的```shutdown```指令來管理您的計算機的開關機狀態，幾乎不需要任何外置庫。

## 如何使用 2ndVerify ？

1. 更改 2ndVerify.cpp 第3、4行 const 變數[釋義見此]（#备注：CONST變數含義）
2. 編譯 2ndVerify.cpp 為 2ndVerify.exe
3. 將 2ndVerify.exe 加入開機啟動項
4. Enjoy~

### 备注：CONST變數含義

Line 3: 

```cpp
const int maxWrongTimes
```

默認值：3

含義：最多嘗試次數

調用：在```checkWrongMax()```函數中有調用

重要性：不建議增加，可以減少或不修改

Line 4: 

```cpp
const string secode
```

默認值：2NDVERIFY

含義：參考註釋。 ```// second_code -> seccode -> secode```

調用：在```isRightCode（）```函數中有調用

重要性：推薦修改


## 忘記了 Code 怎麼辦？

- 通過 PE 刪除開機啟動項
- and so on.


## 2ndVerify 有哪些已開發或待開發的功能 ？

- [x] 驗證輸入的 Code 和儲存的 Code 是否一致

- [x] 限制最大嘗試次數

- [x] 達到最大嘗試次數后自動重新啟動

- [x] 可以防止被關閉後無法保護資料（預先執行延遲重新啟動指令）

- [x] 幾乎脫離外置庫（只使用C++內核與系統內置指令）

- [ ] 將 Code 以加密方式儲存到本地，然後通過讀取這個 Code，進行 2ndVerify 的運作

- [ ] 實現 GUI

- [ ] 通過時間戳的變化來即時更新 Code

- [ ] 當您忘記您的 Code 時，可以通過回答預設問題來進行

- [ ] 聯網登錄到 [PixELBlog]（https://blog.pixelwine.top） 帳號，遠端管理您的計算機（們）

- [ ] 連接到第三方平臺

- [ ] 通過第三方平臺API，實現遠端登錄

- [ ] 支援生物識別（有可能開發特殊的硬體）

（在做了!!!）


## 2ndVerify 的官方版本與移植版本

釋義：

- 經驗證的官方版本：指經過 PixelWine 三機（VirtualBox Windows XP & VirtualBox Windows 7 & Physical Windows 10）驗證可行性，且由 PixelWine 開發的 2ndVerify 版本。 目前尚沒有。
- 官方版本：指由 PixelWine 開發的 2ndVerify 版本，目前只有 2ndVerify Version Windows-alpha 。
- 經官方驗證的移植版本：指經過 PixelWine 三機（VirtualBox Windows XP & VirtualBox Windows 7 & Physical Windows 10）驗證可行性的移植版本。 目前尚沒有。
- 移植版本：指經過 PixelWine 書面或 Email 許可，且非由 PixelWine 開發的 2ndVerify 版本。 目前尚沒有。
- 未經官方許可的移植版本（又稱"小道版本"）：指未經過PixelWine書面或 Email許可，且非由PixelWine開發的2ndVerify版本。 此項不進行統計。



