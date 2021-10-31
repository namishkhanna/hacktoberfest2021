$('.faq-heading').click(function () {
    $(this).parent('li').toggleClass('the-active').find('.faq-text').slideToggle();
});
function signUpContent() {
    var signInContent = document.getElementsByClassName("signInContent")[0];
    signInContent.style.display = "none";
    var signUpContent = document.getElementsByClassName("signUpContent")[0];
    signUpContent.style.display = "block"
}
function signInContent() {
    var signUpContent = document.getElementsByClassName("signUpContent")[0];
    signUpContent.style.display = "none";
    var signInContent = document.getElementsByClassName("signInContent")[0];
    signInContent.style.display = "block"
}
var nav = document.getElementById("nav");
window.addEventListener('scroll', function () {
    if (window.scrollY >= 100) {
        nav.classList.add("nav_black");
    }
    else {
        nav.classList.remove("nav_black");
    }
})