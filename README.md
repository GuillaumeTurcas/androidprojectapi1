 # androidprojectapi1

 We ensure usser is the right one by adding a fingerprint authentification directly in the login page. There is no password, only fingerprint, because it is the only authentification that a hacker can not steal.

 We securely save user's data on the phone, by an encryption and decryption system in PKCS7Padding, a highly secure hashing system. It will not be stored in clear on a .txt file, but as a byte array, in the SharedPreferences of our application. We also make an https url that secure the exchange with the API.

We hide the url in a c++ file, where it is base64 encrypted, which is itself recalled in the main code, to decrypt it efficiently. The url variable therefore calls this decryption function, and it is then used as a String variable.

 Somes screenshot are visible in the main file.