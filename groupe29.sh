
echo BIENVENUE SUR MON PROJET EN LANGAGE C
echo "veuillez precisez l enplacement dinstallation"
read chemin
cd  $chemin

echo " ######## Etape de mise a jours du systeme ######"
sudo apt-get update

echo " #### debut des installations###"
sudo apt-get install gcc
sudo apt-get install gedit
sudo apt-get install git
echo "###### ENVIRONNEMENT DEPLOYER AVEC SUCCES#####"
pwd
 git  clone https://github.com/juliosongong/groupe29.git
ls -l
cd groupe29	
gcc -Wall jul.c -o jul -lm
chmod +x jul.c

./jul

