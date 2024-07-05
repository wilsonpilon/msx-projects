﻿NDContentPage.OnToolTipsLoaded({834:"<div class=\"NDToolTip TEnumeration LC\"><div class=\"TTSummary\">Describes how a segment\'s data bits are interpreted.</div></div>",894:"<div class=\"NDToolTip TEnumeration LC\"><div class=\"TTSummary\">The error correction level in a QR Code symbol.&nbsp; enum QRCODE_ECC { // Must be declared in ascending order of error protection // so that an internal qrcodegen function works properly QRCODE_ECC_LOW = 0 ,&nbsp; // The QR Code can tolerate about&nbsp; 7% erroneous codewords QRCODE_ECC_MEDIUM&nbsp; ,&nbsp; // The QR Code can tolerate about 15% erroneous codewords QRCODE_ECC_QUARTILE,&nbsp; // The QR Code can tolerate about 25% erroneous codewords QRCODE_ECC_HIGH&nbsp; ,&nbsp; // The QR Code can tolerate about 30% erroneous codewords // QRCODE_ECC_MAX, };</div></div>",935:"<div class=\"NDToolTip TEnumeration LC\"><div class=\"TTSummary\">The mask pattern used in a QR Code symbol.&nbsp; enum QRCODE_MASK { // A special value to tell the QR Code encoder to // automatically select an appropriate mask pattern QRCODE_MASK_AUTO = -1, // The eight actual mask patterns QRCODE_MASK_0 = 0, // (i + j) % 2 = 0 QRCODE_MASK_1,&nbsp; // i % 2 = 0 QRCODE_MASK_2,&nbsp; // j % 3 = 0 QRCODE_MASK_3,&nbsp; // (i + j) % 3 = 0 QRCODE_MASK_4,&nbsp; // (i / 2 + j / 3) % 2 = 0 QRCODE_MASK_5,&nbsp; // (i * j) % 2 + (i * j) % 3 = 0 QRCODE_MASK_6,&nbsp; // ((i * j) % 3 + i * j) % 2 = 0 QRCODE_MASK_7,&nbsp; // ((i * j) % 3 + i + j) % 2 = 0 // QRCODE_MASK_MAX, };</div></div>"});