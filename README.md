# Installing Shrew VPN client on Ubuntu 20.04 - IKE

The Shrew Soft VPN is a free VPN client that has not been developed since 2013. It is known as IKE (Internet Key Exchange) which is a standard IPsec protocol used for secure VPN and authentication. The IKE packages are no longer available for Ubuntu 20.04. So, to install it follow the instructions as below:

### Prerequisites
1. Add QT5 Repo
```
sudo apt-get install build-essential
```
![](https://i.imgur.com/4qz7tDB.png)

```
sudo apt-get install qtcreator
```
![](https://i.imgur.com/9Ks0lFA.png)
```
sudo apt-get install qt5-default qt5-qmake 
```
![](https://i.imgur.com/fvGoKde.png)

2. Install dependencies
```
sudo apt install cmake libssl-dev libedit-dev flex bison
```
![](https://i.imgur.com/HpnvAI0.png)

### 1. Clone VPN client from Github
```
sudo git clone https://github.com/HayfaAbusnina/ike.git
```
[IKE Repo](https://github.com/HayfaAbusnina/ike.git)

### 2. Change username
2.1. Determine current username
```
whoami
```
![](https://i.imgur.com/6CiQinn.png)

2.2. Replace “habusnina” to your username
```
sed -i 's_habusnina_yourusername_gI' ~/ike/source/qikea/moc_qikea.cpp_parameters 
sed -i 's_habusnina_yourusername_gI' ~/ike/source/qikec/moc_qikec.cpp_parameters
```

### 3. Install using following instructions
```
cd ike
cmake -DCMAKE_INSTALL_PREFIX=/usr -DQTGUI=YES -DETCDIR=/etc -DNATT=YES
```
![](https://i.imgur.com/2g2BpMC.png)

```
make 
```
![](https://i.imgur.com/t2fsVgg.png)

```
sudo make install 
```
![](https://i.imgur.com/VtVnxfC.png)

### 4. Reload new installed libraries
```
sudo ldconfig 
```
![](https://i.imgur.com/iEW6ZaU.png)

### 5. Create iked config file
```
sudo mv /etc/iked.conf.sample /etc/iked.conf
```
![](https://i.imgur.com/OtdRJSh.png)

### 6. Launch IKE
```
sudo iked
```
![](https://i.imgur.com/m3LyEa4.png)

### 7. Run GUI
```
qikea
```
![](https://i.imgur.com/NSouUG4.png)


[!["Buy Me A Coffee"](https://www.buymeacoffee.com/assets/img/custom_images/orange_img.png)](https://www.buymeacoffee.com/hayfa)

