#!/bin/bash
function mensaje() {
    echo '***'
    echo '***' $1
    echo '****'
    read -p '*** CRTL+C to stop install. Other key to continue:'
    return
}
mensaje "Installing prerequisites ....."
sudo apt install -y flex bison cmake openssl
sudo apt install -y libedit2 libedit-dev
sudo apt install -y qt5-default
mensaje "Compiling the sources ...."
cmake -DCMAKE_INSTALL_PREFIX=/usr -DQTGUI=YES -DETCDIR=/etc -DNATT=YES
mensaje "If not fatal errors encountred (review previous messages), do make"
make
mensaje "If make was successfully done, run install..."
sudo make install
sudo cp iked.conf /etc
sudo iked
sudo cp source/qikea/png/qikea.icns /usr/share/icons/
cat > /tmp/qikea.desktop << END_OF_DATA
[Desktop Entry]
Name=ShRew VPN
GenericName=ShRew IPSEC client
Comment=Manage IPSEC connections for linuxmint 20+ systems
Exec=/usr/bin/qikea
Icon=/usr/share/icons/qikea.icns
Terminal=false
Type=Application
Keywords=ipsec;vpn
Categories=Network;Network;Internet;Security
END_OF_DATA
sudo mv /tmp/qikea.desktop /usr/share/applications
cat << END_OF_PROCESS
***
*** Installation completed. You can add program to the system menu or taskbar the program
***
***      - Desktop access: /usr/share/applications/qikea.desktop   (copy this to your desktop)
***      - The Executable is: /usr/bin/qikea
***
END_OF_PROCESS


