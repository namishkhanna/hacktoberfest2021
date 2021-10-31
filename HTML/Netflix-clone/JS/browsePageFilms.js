var nav = document.getElementById("nav");
window.addEventListener('scroll', function () {
    if (window.scrollY >= 100) {
        nav.classList.add("nav_black");
    }
    else {
        nav.classList.remove("nav_black");
    }
})
var data = [
    {
        src: "./Images/large-movie1.jpg",
        heading: "The Paramedic",
        description: "Angel Hernandez is a paramedic who lives with his girlfriend  François. Angel has an unempathetic attitude towards his patients and steals from them, selling the more valuable items to a local fence. At home, he is possessive and controlling towards Vane. The couple are trying for a baby without success. Angel tells Vane it’s her fault and even suggest her inability to get pregnant is psychosomatic.  "
    },
    {
        src: "./Images/large-movie2.jpg",
        heading: "Sweet Girl",
        description: "Sweet Girl is a 2021 American action thriller film directed by Brian Andrew Mendoza in his feature directorial debut and written by Philip Eisner and Gregg Hurwitz. The film stars Jason Momoa, Isabela Merced, Manuel Garcia-Rulfo, Adria Arjona, Raza Jaffrey, Justin Bartha, Lex Scott Davis, Michael Raymond-James and Amy Brenneman."
    },
    {
        src: "./Images/large-movie3.jpg",
        heading: "Loco por ella",
        description: "Crazy About Her (Spanish: Loco por ella) is a 2021 Spanish romantic comedy film directed by Dani de la Orden, written by Natalia Durán and Eric Navarro and starring Álvaro Cervantes and Susana Abaitua.[1][2] It was released on 26 February 2021 by Netflix."
    }, {
        src: "./Images/large-movie4.jpg",
        heading: "Fractured",
        description: "Fractured is a 2019 American psychological thriller film directed by Brad Anderson from a screenplay by Alan B. McElroy. It stars Sam Worthington, Lily Rabe, Stephen Tobolowsky, Adjoa Andoh, and Lucy Capri."
    },
    {
        src: "./Images/large-movie5.jpg",
        heading: "Beasts of No Nation",
        description: "Beasts of No Nation is a 2015 American-Ghanaian war drama film written, co-produced, shot, and directed by Cary Joji Fukunaga. It follows a young boy who becomes a child soldier as his country experiences a horrific civil war. Shot in Ghana and starring Idris Elba, Abraham Attah, Ama K. Abebrese, Grace Nortey, David Dontoh, and Opeyemi Fagbohungbe, the film is based on the 2005 novel of the same name by Uzodinma Iweala,[4] the book itself being named after a Fela Kuti album."
    }, {
        src: './Images/large-movie6.jpg',
        heading: "Shaft",
        description: "Shaft is a 2019 American action comedy film directed by Tim Story and written by Kenya Barris and Alex Barnow. The film stars Samuel L. Jackson, Jessie T. Usher, Regina Hall, and Richard Roundtree."
    },
    {
        src: "./Images/large-movie7.jpg",
        heading: "Live Twice, Love Once",
        description: "Live Twice, Love Once (Spanish: Vivir dos veces) is a 2019 Spanish comedy film directed by María Ripoll. The film premiered in Madrid on 6 September 2019. As of August 2020, 50% of the eight critics reviews compiled on Rotten Tomatoes are positive, with an average rating of 5.4/Images/10."
    }, {
        src: "./Images/large-movie8.jpg",
        heading: "Xoxo",
        description: "xoxo is a 2016 American drama film directed by Christopher Louie and starring Sarah Hyland, Graham Phillips, Brett DelBuono, Hayley Kiyoko, Colin Woodell, Ryan Hansen, Ione Skye, and Chris D'Elia. It is based on a story by Louie and is written by Dylan Meyer. It was produced by Joe Russell p.g.a. and released on August 26, 2016, by Netflix."
    },
    {
        src: "./Images/small-movie1.webp",
        heading: "The Paramedic",
        description: "Angel Hernandez is a paramedic who lives with his girlfriend  François. Angel has an unempathetic attitude towards his patients and steals from them, selling the more valuable items to a local fence. At home, he is possessive and controlling towards Vane. The couple are trying for a baby without success. Angel tells Vane it’s her fault and even suggest her inability to get pregnant is psychosomatic.  "
    },
    {
        src: "./Images/small-movie2.webp",
        heading: "Sweet Girl",
        description: "Sweet Girl is a 2021 American action thriller film directed by Brian Andrew Mendoza in his feature directorial debut and written by Philip Eisner and Gregg Hurwitz. The film stars Jason Momoa, Isabela Merced, Manuel Garcia-Rulfo, Adria Arjona, Raza Jaffrey, Justin Bartha, Lex Scott Davis, Michael Raymond-James and Amy Brenneman."
    },
    {
        src: "./Images/small-movie3.webp",
        heading: "Loco por ella",
        description: "Crazy About Her (Spanish: Loco por ella) is a 2021 Spanish romantic comedy film directed by Dani de la Orden, written by Natalia Durán and Eric Navarro and starring Álvaro Cervantes and Susana Abaitua.[1][2] It was released on 26 February 2021 by Netflix."
    }, {
        src: "./Images/small-movie4.webp",
        heading: "Fractured",
        description: "Fractured is a 2019 American psychological thriller film directed by Brad Anderson from a screenplay by Alan B. McElroy. It stars Sam Worthington, Lily Rabe, Stephen Tobolowsky, Adjoa Andoh, and Lucy Capri."
    },
    {
        src: "./Images/small-movie5.webp",
        heading: "Beasts of No Nation",
        description: "Beasts of No Nation is a 2015 American-Ghanaian war drama film written, co-produced, shot, and directed by Cary Joji Fukunaga. It follows a young boy who becomes a child soldier as his country experiences a horrific civil war. Shot in Ghana and starring Idris Elba, Abraham Attah, Ama K. Abebrese, Grace Nortey, David Dontoh, and Opeyemi Fagbohungbe, the film is based on the 2005 novel of the same name by Uzodinma Iweala,[4] the book itself being named after a Fela Kuti album."
    }, {
        src: './Images/small-movie6.webp',
        heading: "Elite",
        description: "Shaft is a 2019 American action comedy film directed by Tim Story and written by Kenya Barris and Alex Barnow. The film stars Samuel L. Jackson, Jessie T. Usher, Regina Hall, and Richard Roundtree."
    },
    {
        src: "./Images/small-movie7.webp",
        heading: "Live Twice, Love Once",
        description: "     Live Twice, Love Once (Spanish: Vivir dos veces) is a 2019 Spanish comedy film directed by María Ripoll. The film premiered in Madrid on 6 September 2019. As of August 2020, 50% of the eight critics reviews compiled on Rotten Tomatoes are positive, with an average rating of 5.4/Images/10."
    }, {
        src: "./Images/small-movie8.webp",
        heading: "Xoxo",
        description: "xoxo is a 2016 American drama film directed by Christopher Louie and starring Sarah Hyland, Graham Phillips, Brett DelBuono, Hayley Kiyoko, Colin Woodell, Ryan Hansen, Ione Skye, and Chris D'Elia. It is based on a story by Louie and is written by Dylan Meyer. It was produced by Joe Russell p.g.a. and released on August 26, 2016, by Netflix."
    },
    {
        src: "./Images/top_rated1.jpg",
        heading: "The Paramedic",
        description: "Angel Hernandez is a paramedic who lives with his girlfriend  François. Angel has an unempathetic attitude towards his patients and steals from them, selling the more valuable items to a local fence. At home, he is possessive and controlling towards Vane. The couple are trying for a baby without success. Angel tells Vane it’s her fault and even suggest her inability to get pregnant is psychosomatic.  "
    },
    {
        src: "./Images/top_rated2.jpg",
        heading: "Sweet Girl",
        description: "Sweet Girl is a 2021 American action thriller film directed by Brian Andrew Mendoza in his feature directorial debut and written by Philip Eisner and Gregg Hurwitz. The film stars Jason Momoa, Isabela Merced, Manuel Garcia-Rulfo, Adria Arjona, Raza Jaffrey, Justin Bartha, Lex Scott Davis, Michael Raymond-James and Amy Brenneman."
    },
    {
        src: "./Images/top_rated3.jpg",
        heading: "Loco por ella",
        description: "Crazy About Her (Spanish: Loco por ella) is a 2021 Spanish romantic comedy film directed by Dani de la Orden, written by Natalia Durán and Eric Navarro and starring Álvaro Cervantes and Susana Abaitua.[1][2] It was released on 26 February 2021 by Netflix."
    }, {
        src: "./Images/top_rated4.jpg",
        heading: "Fractured",
        description: "Fractured is a 2019 American psychological thriller film directed by Brad Anderson from a screenplay by Alan B. McElroy. It stars Sam Worthington, Lily Rabe, Stephen Tobolowsky, Adjoa Andoh, and Lucy Capri."
    },
    {
        src: "./Images/top_rated5.jpg",
        heading: "Beasts of No Nation",
        description: "Beasts of No Nation is a 2015 American-Ghanaian war drama film written, co-produced, shot, and directed by Cary Joji Fukunaga. It follows a young boy who becomes a child soldier as his country experiences a horrific civil war. Shot in Ghana and starring Idris Elba, Abraham Attah, Ama K. Abebrese, Grace Nortey, David Dontoh, and Opeyemi Fagbohungbe, the film is based on the 2005 novel of the same name by Uzodinma Iweala,[4] the book itself being named after a Fela Kuti album."
    }, {
        src: './Images/top_rated6.jpg',
        heading: "Elite",
        description: "Shaft is a 2019 American action comedy film directed by Tim Story and written by Kenya Barris and Alex Barnow. The film stars Samuel L. Jackson, Jessie T. Usher, Regina Hall, and Richard Roundtree."
    },
    {
        src: "./Images/top_rated7.jpg",
        heading: "Live Twice, Love Once",
        description: "     Live Twice, Love Once (Spanish: Vivir dos veces) is a 2019 Spanish comedy film directed by María Ripoll. The film premiered in Madrid on 6 September 2019. As of August 2020, 50% of the eight critics reviews compiled on Rotten Tomatoes are positive, with an average rating of 5.4/Images/10."
    }, {
        src: "./Images/top_rated8.jpg",
        heading: "Xoxo",
        description: "xoxo is a 2016 American drama film directed by Christopher Louie and starring Sarah Hyland, Graham Phillips, Brett DelBuono, Hayley Kiyoko, Colin Woodell, Ryan Hansen, Ione Skye, and Chris D'Elia. It is based on a story by Louie and is written by Dylan Meyer. It was produced by Joe Russell p.g.a. and released on August 26, 2016, by Netflix."
    },
    {
        src: "./Images/action_movie1.webp",
        heading: "The Paramedic",
        description: "Angel Hernandez is a paramedic who lives with his girlfriend  François. Angel has an unempathetic attitude towards his patients and steals from them, selling the more valuable items to a local fence. At home, he is possessive and controlling towards Vane. The couple are trying for a baby without success. Angel tells Vane it’s her fault and even suggest her inability to get pregnant is psychosomatic.  "
    },
    {
        src: "./Images/action_movie2.webp",
        heading: "Sweet Girl",
        description: "Sweet Girl is a 2021 American action thriller film directed by Brian Andrew Mendoza in his feature directorial debut and written by Philip Eisner and Gregg Hurwitz. The film stars Jason Momoa, Isabela Merced, Manuel Garcia-Rulfo, Adria Arjona, Raza Jaffrey, Justin Bartha, Lex Scott Davis, Michael Raymond-James and Amy Brenneman."
    },
    {
        src: "./Images/action_movie3.webp",
        heading: "Loco por ella",
        description: "Crazy About Her (Spanish: Loco por ella) is a 2021 Spanish romantic comedy film directed by Dani de la Orden, written by Natalia Durán and Eric Navarro and starring Álvaro Cervantes and Susana Abaitua.[1][2] It was released on 26 February 2021 by Netflix."
    }, {
        src: "./Images/action_movie4.webp",
        heading: "Fractured",
        description: "Fractured is a 2019 American psychological thriller film directed by Brad Anderson from a screenplay by Alan B. McElroy. It stars Sam Worthington, Lily Rabe, Stephen Tobolowsky, Adjoa Andoh, and Lucy Capri."
    },
    {
        src: "./Images/action_movie5.webp",
        heading: "Beasts of No Nation",
        description: "Beasts of No Nation is a 2015 American-Ghanaian war drama film written, co-produced, shot, and directed by Cary Joji Fukunaga. It follows a young boy who becomes a child soldier as his country experiences a horrific civil war. Shot in Ghana and starring Idris Elba, Abraham Attah, Ama K. Abebrese, Grace Nortey, David Dontoh, and Opeyemi Fagbohungbe, the film is based on the 2005 novel of the same name by Uzodinma Iweala,[4] the book itself being named after a Fela Kuti album."
    }, {
        src: './Images/action_movie6.webp',
        heading: "Elite",
        description: "Shaft is a 2019 American action comedy film directed by Tim Story and written by Kenya Barris and Alex Barnow. The film stars Samuel L. Jackson, Jessie T. Usher, Regina Hall, and Richard Roundtree."
    },
    {
        src: "./Images/action_movie7.webp",
        heading: "Live Twice, Love Once",
        description: "     Live Twice, Love Once (Spanish: Vivir dos veces) is a 2019 Spanish comedy film directed by María Ripoll. The film premiered in Madrid on 6 September 2019. As of August 2020, 50% of the eight critics reviews compiled on Rotten Tomatoes are positive, with an average rating of 5.4/Images/10."
    }, {
        src: "./Images/action_movie8.webp",
        heading: "Xoxo",
        description: "xoxo is a 2016 American drama film directed by Christopher Louie and starring Sarah Hyland, Graham Phillips, Brett DelBuono, Hayley Kiyoko, Colin Woodell, Ryan Hansen, Ione Skye, and Chris D'Elia. It is based on a story by Louie and is written by Dylan Meyer. It was produced by Joe Russell p.g.a. and released on August 26, 2016, by Netflix."
    }
]
function showVideo(value) {
    switch (value) {
        case value:
            document.getElementsByClassName('insertImage')[0].src = data[value].src;
            document.getElementsByClassName('videoHeading')[0].innerText = data[value].heading;
            document.getElementsByClassName('videoDescription')[0].innerText = data[value].description;
            break;
    }
    document.getElementsByClassName("videoDiv")[0].style.display = 'block';
}
function showTrending(value) {
    switch (value) {
        case value:
            document.getElementsByClassName('insertImage')[1].src = data[value].src;
            document.getElementsByClassName('videoHeading')[1].innerText = data[value].heading;
            document.getElementsByClassName('videoDescription')[1].innerText = data[value].description;
            break;
    }
    document.getElementsByClassName("videoDiv")[1].style.display = 'block';
}
function showTopRated(value) {
    switch (value) {
        case value:
            document.getElementsByClassName('insertImage')[2].src = data[value].src;
            document.getElementsByClassName('videoHeading')[2].innerText = data[value].heading;
            document.getElementsByClassName('videoDescription')[2].innerText = data[value].description;
            break;
    }
    document.getElementsByClassName("videoDiv")[2].style.display = 'block';
}
function showActionMovies(value) {
    switch (value) {
        case value:
            document.getElementsByClassName('insertImage')[3].src = data[value].src;
            document.getElementsByClassName('videoHeading')[3].innerText = data[value].heading;
            document.getElementsByClassName('videoDescription')[3].innerText = data[value].description;
            break;
    }
    document.getElementsByClassName("videoDiv")[3].style.display = 'block';
}
function showHorrorMovies(value) {
    switch (value) {
        case value:
            document.getElementsByClassName('insertImage')[4].src = data[value].src;
            document.getElementsByClassName('videoHeading')[4].innerText = data[value].heading;
            document.getElementsByClassName('videoDescription')[4].innerText = data[value].description;
            break;
    }
    document.getElementsByClassName("videoDiv")[4].style.display = 'block';
}
function showRomanticMovies(value) {
    switch (value) {
        case value:
            document.getElementsByClassName('insertImage')[5].src = data[value].src;
            document.getElementsByClassName('videoHeading')[5].innerText = data[value].heading;
            document.getElementsByClassName('videoDescription')[5].innerText = data[value].description;
            break;
    }
    document.getElementsByClassName("videoDiv")[5].style.display = 'block';
}
function closeVideoDiv(value) {
    document.getElementsByClassName("videoDiv")[value].style.display = 'none';
}
$(document).ready(function () {
    var $videoSrc;
    $('.video-btn').click(function () {
        $videoSrc = $(this).data("src");
    });
    $('#myModal').on('shown.bs.modal', function (e) {
        $("#video").attr('src', $videoSrc + "?autoplay=1&modestbranding=1&showinfo=0");
    })
    $('#myModal').on('hide.bs.modal', function (e) {
        $("#video").attr('src', $videoSrc);
    })
});
