# 🧠 TinyML on STM32 – Sine Wave Inference

This project demonstrates the complete TinyML deployment workflow by running a TensorFlow Lite Micro model on the STM32F407 Discovery board. A trained sine wave model is converted to TensorFlow Lite, embedded into the firmware as a C array, and executed on the MCU using TensorFlow Lite Micro inference.

---

## 🏗️ Workflow

```text
Train Model (Python)
        │
        ▼
TensorFlow Lite Conversion
        │
        ▼
Convert .tflite → C Array
        │
        ▼
STM32F407 Firmware
        │
        ▼
TensorFlow Lite Micro
        │
        ▼
Model Inference
        │
        ▼
Predicted Sine Output
```

---

## 🔧 Hardware

- STM32F407 Discovery
- ST-LINK
- USB Cable

---

## 💻 Software & Tools

- Python
- TensorFlow
- TensorFlow Lite
- TensorFlow Lite Micro
---

---

## 🐞 Debugging & Validation

- Verified successful TensorFlow Lite Micro model initialization.
- Validated tensor allocation and arena memory usage.
- Debugged model input and output tensors during inference.
- Compared MCU inference results with Python predictions.
- Verified UART output for predicted sine values.
- Monitored Flash and RAM utilization after model deployment.
