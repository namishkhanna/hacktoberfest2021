function validate(){
    var user = document.getElementById('email').value;
    var pass = document.getElementById('pwd').value;
	var filter = /^([a-zA-Z0-9_\.\-])+\@(([a-zA-Z0-9\-])+\.)+([a-zA-Z0-9]{2,4})+$/;
    if(user == ''){
        alert("Please Enter The User Name");
    }
    else if(pass=='')
		{
        	alert("Please Enter The Password");
		}
	else if(!filter.test(user))
		{
			alert("Enter valid email id");
		}
	else if(pwd.length < 8 || pwd.length > 8)
		{
			alert("Minimum And Maximum Length Of Password is 8");
		}
    else{
        alert("Thank You for Login & You are being Redirected to Google Search");
             window.location = "https://www.google.co.in"
    }    

}
function clear(){
    document.getElementById("email").value="";
	document.getElementById("pwd").value="";
}