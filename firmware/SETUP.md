# 🔧 Arduino Cloud Setup Instructions

To use the firmware provided in this folder, follow these steps to correctly configure your device in Arduino Cloud:

---

## 1️⃣ Create an Arduino Cloud Account
If you haven’t already, sign up at:  
👉 [https://cloud.arduino.cc](https://cloud.arduino.cc)

---

## 2️⃣ Create a New Thing

1. Go to **IoT Cloud → Things**.
2. Click **"Create Thing"**.
3. Give your Thing a name (e.g. `SmartSwitch`).

---

## 3️⃣ Link Your Board

1. Under **Device**, click **"Select Device"** → **"Set up a new device"**.
2. Choose **Arduino Nano ESP32**.
3. Follow the steps to link your board to your Arduino Cloud account.

---

## 4️⃣ Create a Cloud Variable

1. Under **"Cloud Variables"**, click **"Add variable"**.
2. Set the following parameters:
   - **Name**: `pc`
   - **Type**: `Boolean`
   - **Permission**: `Read & Write`
   - **Update Policy**: `On Change`

This variable will trigger the servo motor when toggled from the cloud dashboard.

---

## 5️⃣ Download the Thing Properties

1. Navigate to the **Sketch** tab and click on the **Download icon** in the top right corner to donwnload the sketch
2. This will download a `.zip` file that includes:
   - `thingProperties.h`
   - `arduino_secrets.h`

3. ⚠️ **Important**: Open the `arduino_secrets.h` file and fill in your Wi-Fi credentials and device key.

Update the following lines with your information:

```cpp
const char SSID[]        = "YOUR_WIFI_NAME";         // Network SSID
const char PASS[]        = "YOUR_WIFI_PASSWORD";     // Network password
const char DEVICE_KEY[]  = "YOUR_DEVICE_SECRET_KEY"; // Provided by Arduino Cloud when a new IoT board is registered
```

---

## 6️⃣ Upload the Sketch

1. Open the `.ino` file from this repository (e.g. `firmware/smart_switch.ino`).
2. Make sure the `thingProperties.h` file is in the same folder.
3. Upload the sketch to your **Arduino Nano ESP32** using the Arduino IDE or Arduino Web Editor.

---

## 7️⃣ Dashboard Creation

1. Go to the **Arduino Cloud** menu and select **Dashboards**
2. Create a new dashboard and add a **Push Button** widget linked to the variable **pc** of the Thing you just created

---


## ✅ Done!

Now you can go to your Arduino Cloud dashboard and toggle the `pc` switch to control your DIY smart switch remotely.
