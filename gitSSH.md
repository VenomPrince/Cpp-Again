sudo apt update

sudo apt install git openssh-client

ssh-keygen -t rsa -b 4096 -C "your.email@example.com"

ls -al ~/.ssh

cat ~/.ssh/id_rsa.pub

Copy the entire output and add it to GitHub:

    Go to GitHub → Settings → SSH and GPG keys
    Click New SSH Key
    Paste the copied key and save it

eval $(ssh-agent -s)
ssh-add ~/.ssh/id_rsa   

ssh -T git@github.com

