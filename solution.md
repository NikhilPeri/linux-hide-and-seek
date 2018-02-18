# THIS IS THE SOLUTION
# SPOILER ALERT

![spoiler](https://media.giphy.com/media/hRkIph43Czg1q/giphy.gif)

### Step 1:
```
ifconfig
```
to get your ip address
### Step 2:
```
curl -d 'ip_addr=<your_ip>' -X POST oec-2018.herokuapp.com/api/linux_workshop -b 'cookie=<your_name> > input.txt'
```
to push the request result to your file

### Step 3:
`sudo apt-get install gcc` or `brew install gcc` or `sudo yum install gcc`
if c compiler not installed
```
gcc -o program program.c
```

### Step 4:
```
program
```

to run the code

### Step 5:
```
top | grep program
```
to find the running process pid

### Step 6:
```
kill -9 <pid>
```
to kill the process

### Step 7:
```
rm *-delete.me
```
cleanup the trash


### Step 8:
```
cat output.txt | grep -v Not the secret
```
