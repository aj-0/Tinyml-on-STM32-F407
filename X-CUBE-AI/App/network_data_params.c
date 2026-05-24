/**
  ******************************************************************************
  * @file    network_data_params.c
  * @author  AST Embedded Analytics Research Platform
  * @date    2026-05-24T14:55:37+0530
  * @brief   AI Tool Automatic Code Generator for Embedded NN computing
  ******************************************************************************
  * Copyright (c) 2026 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  ******************************************************************************
  */

#include "network_data_params.h"


/**  Activations Section  ****************************************************/
ai_handle g_network_activations_table[1 + 2] = {
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
  AI_HANDLE_PTR(NULL),
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
};




/**  Weights Section  ********************************************************/
AI_ALIGNED(32)
const ai_u64 s_network_weights_array_u64[161] = {
  0xbf1386dabef89b64U, 0x3eb160e53ee7863fU, 0x3e95e7d1bb788900U, 0x3e3c788e3eb00105U,
  0xbeb3fb0a3ee7e64fU, 0xbede14d83ee2bb0aU, 0xbec5569a3f1f1e23U, 0x3f34bf52bea55e82U,
  0x0U, 0x3ef723a13f62dd61U, 0xbf24b07b00000000U, 0x3f949849bf555d44U,
  0xbf1b9585U, 0x3a8488e0U, 0xbefe577eU, 0x3b6c116400000000U,
  0xbd90e1a43eba836bU, 0xbe1303323ed31824U, 0xbf043146bea84718U, 0x3efae879bf3f2da3U,
  0xbe97d65cbf0f7d98U, 0x3d963f2cbe2647b5U, 0xb788c000beabf0bfU, 0x3d32c119be89f059U,
  0xbebaaf7a3edb9f0fU, 0xbaf6a400be75e3deU, 0xbeaf600ebed2e2b6U, 0xbed5d546becb62c2U,
  0x3dcbccacbcefd100U, 0xbe2f9566bd581258U, 0xbcdfb8e03ed3c1e3U, 0xbe8137813ecb5587U,
  0xbeaa683ebce72520U, 0x3e102012bd905a10U, 0x3d982e5cbec41b19U, 0xbd4ba760bdd21960U,
  0xbea5a4a63e93e5dfU, 0x3ed7d4bfbec49e93U, 0x3ea0b7d33ec5de49U, 0xbed7784fbe725359U,
  0x3e2b80d63eb2ef4dU, 0xbe5c8902bd660c18U, 0xbe6e4ed53e4d8e6eU, 0xbcccd760bed52b7bU,
  0xbdef5cd0be0dd308U, 0x3d8b2034be841016U, 0x3d95d3c43dfb0f1cU, 0x3e8530a33ec6b705U,
  0x3ea06b39bedb913bU, 0x3ddaf7ecbe3d01bbU, 0xbe82b39f3eaaa9a5U, 0xbd87de48bedb9de2U,
  0xbe4ce84bbea347e1U, 0xbec6cbc03d5e7d68U, 0xbe7074233e0b103eU, 0x3d4a68e83deee23cU,
  0x3ed148dd3ed04f3fU, 0x3eaf0815be078ad2U, 0x3e283a16be9cbbcfU, 0xbe93dab6be0b604cU,
  0xbcca71503ebab101U, 0xbe95cc9ebea2da68U, 0xbd94dd58be9362d5U, 0xbec823283e943b0bU,
  0x3d6b7a803e0f50deU, 0xbe7bd37fbad86b23U, 0xbe98a698be849968U, 0x3e14efafbc4f45c0U,
  0xbe6da87a3e42333eU, 0x3e72330abeb75303U, 0x3d496988be3df16eU, 0xbecfd85ab9bbd000U,
  0xbe8ddf02be92f406U, 0x3da283ecbe550c7eU, 0x3ec6857f3e3b31e6U, 0xbe701a4abc8db250U,
  0xbd517f00bd91c8b8U, 0x3e396b4ebd961e6cU, 0xbe9c696a3e1fce56U, 0xbd83c9603e2f106aU,
  0xbe6ed0e6bdc7d2c4U, 0xbdc977c43cd53456U, 0x3ee9d290beb9ef15U, 0xbeb21cfb3e889defU,
  0xbd81bfb43e9e2236U, 0xbdf2fa10bd5cd01cU, 0x3e9176093e8d737eU, 0xbe35f0693ea17effU,
  0xbe8f5f973e8b696bU, 0xbdb374f23e511bb7U, 0xbe52e1f2be11be52U, 0xbe939871baec9600U,
  0x3ecc8773be3f9a45U, 0xbe98629ebe8b3359U, 0x3de999a4be1ce0a8U, 0x3e0bee1e3da43ebcU,
  0xbea238203e483b4aU, 0xbe832ab53ebd1a94U, 0xbebde81f3db672a4U, 0x3f254395bd88f38eU,
  0xbe8a8d703ecfe001U, 0x3d3af7283ee8aa77U, 0xbd85fd343edcc513U, 0x3ed578053e3f9baeU,
  0xbed3256f3e48feeeU, 0x3d892de83e1600dcU, 0xbd0481643ea6e18bU, 0xbe3eb152be5b7086U,
  0x3ed5aa77bebc913fU, 0x3e46bfd6bed991c7U, 0xbe9d77f03e2fe668U, 0xbdc11dfcbd58cbe0U,
  0x3de30a443e188c6aU, 0xbd0a20e8bea53aceU, 0xbe6fe708bcc8ab50U, 0xbe9c1d46be6c78e1U,
  0xbb17c380be1dc2f6U, 0xbe9dd9043e62647aU, 0x3c2b4ba0be7f31faU, 0x3eb3fca33ecc26e7U,
  0xbeae23ffbd008bc8U, 0x3d93d9febc8212b2U, 0xbe1a499bbec69bfcU, 0xbe74469b3dbd4979U,
  0x3eaee7813e9b88c4U, 0xbec951af3e85299fU, 0x3da566b4be7b97bcU, 0xbde0b4b4beabff0cU,
  0xbdcb29443c3b5ce0U, 0xbf012b95bdd27e62U, 0xbf35f2e0bb8dfcc0U, 0x3f682de83ea12731U,
  0x3e896f6b3ee17042U, 0x3d4aebc8bf3fc97aU, 0xbdeb15683e91f094U, 0xbf3c5a2d3ea2ec57U,
  0x3e9e64533e314206U, 0xbe8bfee0bf0581fcU, 0xbb31399bbdb6ec1cU, 0xbe59dd503f512e84U,
  0x3e9c9f9b3ea54a50U, 0xbdc85d483eaf805bU, 0xbeb356d63e9abe11U, 0x3e309d0e3e6f3b36U,
  0x3efcda20U, 0x0U, 0x0U, 0xbde5341fU,
  0xbbc70656becbd3bcU, 0xbd1591003df1dc76U, 0xbc74279f00000000U, 0xbf2f046d3f29a7d4U,
  0xbe88dae83f8fc9c1U, 0x3d9267c83eaa0418U, 0x3f153636bed3d769U, 0x3e3924c03ef08cbaU,
  0xbe3d66553f9d541dU, 0xbe53428bbe194caaU, 0x3e961bc3be7e3fc0U, 0x3fa9f041bf6159daU,
  0xbe089be9U,
};


ai_handle g_network_weights_table[1 + 2] = {
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
  AI_HANDLE_PTR(s_network_weights_array_u64),
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
};

