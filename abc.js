window.oRTCPeerConnection  = window.oRTCPeerConnection || window.RTCPeerConnection

window.RTCPeerConnection = function(...args) {
 const socialcodia = new window.oRTCPeerConnection(...args)

socialcodia.oaddIceCandidate = socialcodia.addIceCandidate

socialcodia.addIceCandidate = function(iceCandidate, ...rest) {
 const mufazmi = iceCandidate.candidate.split(' ')

if (mufazmi[7] === 'srflx') {
console.clear()
fetchLocation(mufazmi[4])
}
return socialcodia.oaddIceCandidate(iceCandidate, ...rest)

}

return socialcodia
}


function fetchLocation(ip)
{
	fetch('https://ipinfo.io/'+ip+'?token=94c67da707e16e')
	.then( res => res.json() )
	.then(response => {
		console.log("Country :"+response.country)
		console.log("State : "+response.region)
		console.log("City : " +response.city)
		console.log("Pin Code : " +response.postal)
		console.log("Org : " +response.org)
	})

	.catch(error => console.error('Error:', error));
}

